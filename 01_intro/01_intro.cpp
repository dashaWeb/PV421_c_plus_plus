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
	cout << (int)-245.95 << endl;
	cout << (bool)-245.95 << endl; //
	cout << (bool)0 << endl; //
	cout << (int)'A' << endl;
	cout << (char)206 << endl;
	char test = 207;
	cout << test << endl;


	unsigned short number_short = 65535;
	number_short = 65536;
	cout << number_short << endl;

	{

		// Унарний оператор
		int a = 2, b = 3;
		cout << "a :: " << a << "\t b :: " << b << endl; // a = 2; b = 3;
		a++;
		b--;
		// !
		cout << "a :: " << a << "\t b :: " << b << endl; // a = 3; b = 2
		cout << "a :: " << a++ << "\t b :: " << b-- << endl; // a =3; b = 2
		cout << "a :: " << a << "\t b :: " << b << endl; // a = 4; b = 1
		cout << "a :: " << ++a << "\t b :: " << --b << endl; // a = 5; b = 0
		a = 2;
		b = 3;

		cout << a++ - b * b-- + a - ++a << endl;
		// 1) ++a {3}
		// 2) b{3} * b--{3} -> 9
		// 3) a++ {3} - 9 -> -6
		// 4) -6 + 3 -> -3
		// 5) -3 - 3 -> -6
		cout << "a :: " << a << "\t b :: " << b << endl; // a = 4; b = 2
		bool test = false;
		cout << boolalpha << !test << endl;
		cout << -a << endl;
		// Бінарний оператор
		// ==, !=, >, < >=, <=
		// +,-,*,/,%
		a = 2;
		b = 3;
		cout << a << " + " << b << " = " << a + b << endl;
		cout << a << " - " << b << " = " << a - b << endl;
		cout << a << " * " << b << " = " << a * b << endl;
		cout << a << " / " << b << " = " << (double)a / b << endl;
		cout << a << " % " << b << " = " << a % b << endl;
		cout << a << " == " << b << " = " << (a == b) << endl;
		cout << a << " > " << b << " = " << (a > b) << endl;
		cout << a << " < " << b << " = " << (a < b) << endl;
		cout << a << " >= " << b << " = " << (a >= b) << endl;
		cout << a << " <= " << b << " = " << (a <= b) << endl;
		cout << a << " != " << b << " = " << (a != b) << endl;
		cout << a << " != " << b << " = " << ((a != b) && true) << endl;
		cout << a << " != " << b << " = " << ((a != b) and true) << endl;
		cout << a << " != " << b << " = " << ((a != b) or true) << endl;
		cout << a << " != " << b << " = " << ((a != b) || true) << endl;

		a = a + 10;
		b = b - 10;
		cout << "a :: " << a << "\t b :: " << b << endl; // a = 12; b = -7
		a = a * 2;
		b = b / 3;
		cout << "a :: " << a << "\t b :: " << b << endl; // a = 12; b = -7
		int time = 4218;
		cout << time / 3600 << ":" << endl;
		time = time % 3600;
		cout << time / 60 << "." << endl;
		cout << time % 60 << endl;
		a += 5;
		b -= 10;
		a *= 2;
		b /= 5;
		a %= 45;
		// && - and
		// || - or
		const double PI = 3.14;
		cout << "PI :: " << 3.14 << endl;

		//PI = 4512; error

		// Тернарний оператор
		// a ? b : c


		int day, month, year;
		/*cout << "Enter day :: ";
		cin >> day;
		cout << "Enter month :: ";
		cin >> month;*/
		cout << "Enter date dd mm yyyy --> ";
		cin >> day >> month >> year;
		cout << (day < 10 ? "0" : "") << day << "." << (month < 10 ? "0" : "") << month << "." << year << endl;
	}
}
