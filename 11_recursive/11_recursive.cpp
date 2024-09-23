#include <iostream>
using namespace std;


// 5! --> 1 * 2 * 3 * 4 * 5

// 5! --> 5 * 4!
// 4! --> 4 * 3!
// 3! --> 3 * 2!
// 2! --> 2 * 1!
// 1! --> 1
// 0! --> 1


int factorial(int number)
{
    if (number == 1 or number == 0) return 1;
    return number * factorial(number - 1);
}

int main()
{
    cout << factorial(5) << endl;
}

