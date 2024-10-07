
#include <iostream>
using namespace std;



char* getWord(char* line)
{
    int index = 0;
    int max = 0;
    int counter = 0;
    for (size_t i = 0; i < strlen(line); i++)
    {
        if (isalpha(line[i])) {
            counter++;
        }
        else {
            if (max < counter)
            {
                max = counter;
                index = i;
            }
            counter = 0;
        }
    }
    index -= max;
    
    char* res = new char[max + 1];
    for (size_t i = 0; i < max; i++)
    {
        res[i] = line[index++];
    }
    res[max] = '\0';

    return res;
}

int main()
{
    char line[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
    cout << getWord(line) << endl;
}
