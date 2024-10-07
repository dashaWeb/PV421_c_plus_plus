#include <iostream>
#include <cstring>
#include <string>
using namespace std;

unsigned int strLen(const char* str)
{
    unsigned int counter = 0;
    while (str[counter] != '\0')
    {
        counter++;
    }
    return counter;
}

int main()
{
    /*char word[5];
    word[0] = 'P';
    word[1] = 'l';
    word[2] = 'u';
    word[3] = 'm';
    word[4] = '\0';
    cout << word << endl;*/

    char word[]{ 'P','l','u','m','\0' };
    cout << word << endl;

    char word_2[] = "Apple";
    cout << word_2 << endl;
    word_2[0] = 'a';
    cout << word_2 << endl;

    cout << "Length word_1 {" << word << "} :: " << strLen(word) << endl;
    cout << "Length word_2 {" << word_2 << "} :: " << strLen(word_2) << endl;
    cout << "Length word_3 {" << "Hello" << "} :: " << strLen("Hello") << endl;
    cout << "\n==================== strlen() ======================" << endl;
    cout << "Length word_1 {" << word << "} :: " << strlen(word) << endl;
    cout << "Length word_2 {" << word_2 << "} :: " << strlen(word_2) << endl;
    cout << "Length word_3 {" << "Hello" << "} :: " << strlen("Hello") << endl;

    cout << "\n==================== strcpy_s() ======================" << endl;
    // ��������� ����� (��������� ������ � ������ �����
    cout << "Before :: " << endl;
    cout << "word_1 --> " << word << endl;
    //word = word_2;
    strcpy_s(word, "ABC");
    cout << "After :: " << endl;
    cout << "word_1 --> " << word << endl;

    char* one = new char[4];
    strcpy_s(one, 4, "Red");
    cout << "Color --> " << one << endl;

    strncpy_s(word, "Hello", 3); // 3 - ������� ������� ��� ��ﳿ
    cout << word << endl;

    cout << "\n==================== strcat_s() ======================" << endl;
    // ������������ �����(��������� ������ � ������ ��������
    char res[100];
    strcpy_s(res, "Hello");
    cout << "Result --> " << res << endl;
    //strcat_s(res, " ");
    strcat_s(res, " World");
    cout << "Result --> " << res << endl;
    strncat_s(res, "! I love C++", 5);
    cout << "Result --> " << res << endl;

    cout << "\n==================== strcmp() ======================" << endl;
    // ��������� ���� �����
    /*char a[] = "Abd";
    char b[] = "Abc";*/
    /*char a[] = "Abc";
    char b[] = "Abc";*/
    char a[] = "Aba";
    char b[] = "Abc";
    cout << a << "\t" << b << "\t" << strcmp(a, b) << endl; // 1(a > b),0(a == b),-1 (a < b)
    cout << a << "\t" << b << "\t" << strncmp(a, b, 2) << endl; // 1(a > b),0(a == b),-1 (a < b)

    ///////////////////////////////////////////
    char line[] = "df 423JHG!@)";
    cout << "\n==================== isalpha(char) ======================" << endl;
    // �������� �� �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isalpha(line[i]) << "\t" << boolalpha << (bool)isalpha(line[i]) << endl;
    }

    cout << "\n==================== isalnum(char) ======================" << endl;
    // �������� �� ����� � �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isalnum(line[i]) << "\t" << boolalpha << (bool)isalnum(line[i]) << endl;
    }

    cout << "\n==================== isdigit(char) ======================" << endl;
    // �������� �� �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isdigit(line[i]) << "\t" << boolalpha << (bool)isdigit(line[i]) << endl;
    }

    cout << "\n==================== isspace(char) ======================" << endl;
    // �������� �� �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isspace(line[i]) << "\t" << boolalpha << (bool)isspace(line[i]) << endl;
    }

    cout << "\n==================== ispunct(char) ======================" << endl;
    // �������� �� ���� ����������
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << ispunct(line[i]) << "\t" << boolalpha << (bool)ispunct(line[i]) << endl;
    }

    cout << "\n==================== islower(char) ======================" << endl;
    // �������� �� �������� �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << islower(line[i]) << "\t" << boolalpha << (bool)islower(line[i]) << endl;
    }

    cout << "\n==================== isupper(char) ======================" << endl;
    // �������� �� ������ �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << isupper(line[i]) << "\t" << boolalpha << (bool)isupper(line[i]) << endl;
    }

    cout << "\n==================== tolower(char) ======================" << endl;
    // ������������ �� �������� �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << (char)tolower(line[i]) << endl;
    }

    cout << "\n==================== toupper(char) ======================" << endl;
    // ������������ �� ������ �����
    for (size_t i = 0; i < strlen(line); i++)
    {
        cout << "\t" << line[i] << " :: " << (char)toupper(line[i]) << endl;
    }

    /*char str[100];
    cout << "Enter line :: ";
    cin >> str;
    cout << "Result :: " << str << endl;
    cin >> str;
    cout << "Result :: " << str << endl;
    cin >> str;
    cout << "Result :: " << str << endl;

    cin.ignore();
    cin.getline(str, 100);
    cout << "Result :: " << str << endl;*/

    string text;
    cout << "Enter :: ";
    //cin >> text;
    getline(cin, text);
    cout << "Result text :: " << text << endl;
}

