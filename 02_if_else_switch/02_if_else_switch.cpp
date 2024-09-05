#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;
enum Colors
{
	RED = 1, GREEN, BLUE, PURPLE, YELLOW
};
int main()
{
	/*int day;
	cout << "Enter number of day :: ";
	cin >> day;

	if (day == 1) {
		cout << "\t ==================== Monday ====================" << endl;
	}
	else if (day == 2) {
		cout << "\t ==================== Tuesday ====================" << endl;
	}
	else if (day == 3) {
		cout << "\t ==================== Wednesday ====================" << endl;
	}
	else {
		cout << "\t ==================== Error !!! ====================" << endl;
	}*/


	//string login, password;
	//cout << "Enter log in :: ";
	//cin >> login;

	//if (login == "Admin" or login == "admin") {
	//    // password
	//    cout << "Enter password :: ";
	//    cin >> password;
	//    if (password == "STEP")
	//        cout << "\t ============= Welcome ===============" << endl;
	//    else if (password == "cancel")
	//        cout << "\t ============= Login cancelled ===============" << endl;
	//    else
	//        cout << "\t ============= The password is incorrect!!! ===============" << endl;
	//}
	//else if (login == "cancel")
	//    cout << "\t Login cancelled" << endl;
	//else
	//    cout << "\t I don't know you" << endl;

	/*int day;
	cout << "Enter number of day :: ";
	cin >> day;
	switch (day)
	{
	case 1:
		cout << "\t ==================== Monday ====================" << endl;
		break;
	case 2:
		cout << "\t ==================== Tuesday ====================" << endl;
		break;
	case 3:
		cout << "\t ==================== Wednesday ====================" << endl;
		break;
	default:
		cout << "\t ==================== Error !!! ====================" << endl;
	}*/
	/*int month;
	cout << "Enter number of month :: ";
	cin >> month;
	if (month >= 1 and month <= 12) {
		switch (month)
		{
		case 4: case 6: case 9: case 11:
			cout << "30 days" << endl;
			break;
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			cout << "31 days" << endl;
			break;
		case 2:
			int year;
			cout << "Enter year :: ";
			cin >> year;
			if (year % 4 == 0 and year % 100 != 0 or year % 400 == 0)
				cout << "29 days" << endl;
			else
				cout << "28 days" << endl;
		}
	}
	else {
		cout << "Error !!!" << endl;
	}*/
	int color;
	cout << R"(
		1 - RED
		2 - GREEN
		3 - BLUE
		4 - PURPLE
		5 - YELLOW
			Enter :: )";
	cin >> color;
	switch (color)
	{
	case RED:
		system("color 47");
		break;
	case GREEN:
		system("color 27");
		break;
	case BLUE:
		system("color 17");
		break;
	case PURPLE:
		system("color 57");
		break;
	case YELLOW:
		system("color 60");
		break;
	}
}

