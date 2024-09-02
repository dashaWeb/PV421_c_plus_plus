#include <iostream>

//using std::cout;
using namespace std;
int main()
{
    cout << "\\Hello\b\\ World!\a" << endl;
    cout << "I \n\t\'LOVE\' \n\t\t\"C++\" \n";
    cout << R"(
    I                           I
        LOVE           LOVE\t
                C++
)";

    // - однорядковий коментар
    /*
        - багаторядковий коментар
    */
    // ctrl + shift + /
    cout << "\\Hello\b\\ World!\a" << endl;
    

    /*
        data types :
                number
                    int
                    float
                char
                boolean
    */
    // type name

    int number_1 = 45;
    cout << "Number 1 :: " << number_1 << endl;
    double a, b, c;
    number_1 = 14;
    cout << "Number 1 :: " << number_1 << endl;
    a = 2.8;
    b = 3.5;
    c = 4.5;
    cout << "A, B, C :: " << a << ", " << b << ", " << c << endl;
    bool flag = true;
    char symbol = '~';
    //cout << "Boolean :: " << boolalpha << flag << endl;
    cout << "Char :: " << symbol << endl;

    /*
        %
        /
        *
        -
        +
    */

    auto result = number_1 + a + flag + symbol;
    /*
        int + double + bool + char
    */
    //a = 45.8; double
    int int_a = 2.5;
    cout << "int a :: ***********************************************************************************************************************************************" << int_a << endl;
    cout << (int) - 245.95 << endl;
    cout << (bool)-245.95 << endl; //
    cout << (bool)0 << endl; //
    cout << (int)'A' << endl;
    cout << (char)206 << endl;
    char test = 207;
    cout << test << endl;




}
