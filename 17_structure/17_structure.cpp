#include <iostream>
#include <string>
using namespace std;

struct Date {
	unsigned short day;
	unsigned short month;
	unsigned short year;
	string getDate()
	{
		// 01.10.2009
		return (day < 10 ? "0" : "") + to_string(day) + "." + (month < 10 ? "0" : "") + to_string(month) + "." + to_string(year);
	}
};


struct Student
{
	string name;
	string surname;
	Date birthdate;
};

void printStudent(Student student)
{
	cout << "First Name :: " << student.name << endl;
	cout << "Surname    :: " << student.surname << endl;
	cout << "Date       :: " << student.birthdate.getDate() << endl;
}
void printStudent(Student* student)
{
	cout << "First Name :: " << student->name << endl;
	cout << "Surname    :: " << student->surname << endl;
	cout << "Date       :: " << student->birthdate.getDate() << endl;
}
string getDate(Date date)
{
	// 01.10.2009
	return (date.day < 10 ? "0" : "") + to_string(date.day) + "." + (date.month < 10 ? "0" : "") + to_string(date.month) + "." + to_string(date.year);
}
void editStudent(Student* student)
{
	cout << "Enter name --> "; cin >> student->name;
	cout << "Enter surname --> "; cin >> student->surname;
	cout << "Enter date --> "; cin >> student->birthdate.day >> student->birthdate.month >> student->birthdate.year;
}
void editStudent(Student& student)
{
	cout << "Enter name --> "; cin >> student.name;
	cout << "Enter surname --> "; cin >> student.surname;
	cout << "Enter date --> "; cin >> student.birthdate.day >> student.birthdate.month >> student.birthdate.year;
}
struct Point
{
	int x, y;
};
struct Rectangle
{
	Point upLeft;
	Point bottomRight;
	void print()
	{
		cout << "A(" << upLeft.x << "," << upLeft.y << ")\t" << "A(" << bottomRight.x << "," << bottomRight.y << ")" << endl;
	}
	int getWidth()
	{
		return bottomRight.x - upLeft.x;
	}
	int getHeight()
	{
		return upLeft.y - bottomRight.y;
	}
	int Square()
	{
		return getWidth() * getHeight();
	}
	void resizeWidth(int resize)
	{
		bottomRight.x += resize;
	}
};
int main()
{

	Rectangle rect = { {0,20} ,{30,0} };
	rect.print();
	cout << "Width :: " << rect.getWidth() << endl;

	/*Student ivan;
	ivan.name = "Ivan";
	ivan.surname = "Golovatenko";
	ivan.birthdate.day = 02;
	ivan.birthdate.month = 8;
	ivan.birthdate.year = 2009;

	Student olia = { "Olia","Polishuk", {24,11,2002} };
	printStudent(ivan);
	printStudent(olia);

	unsigned short size = 3;
	Student* group = new Student[size]{
		olia,
		ivan,
		{"Oleg","Demchuk",{15,6,2008}}
	};
	for (size_t i = 0; i < size; i++)
	{
		cout << "\n=======================================\n";
		printStudent(group[i]);
	}
	cout << "\n\n ============== Edit Student ==================\n";
	editStudent(ivan);
	cout << "Result :: " << endl;
	printStudent(ivan);

	Student* sasha = new Student;
	editStudent(sasha);
	printStudent(sasha);*/
	/*string firstName = "Pasha";
	string lastName = "Polishuk";
	string fatherName = "None";
	unsigned short day = 01;
	unsigned short month = 10;
	unsigned short year = 2009;

	string firstName_2 = "Pasha";
	string lastName_2 = "Polishuk";
	string fatherName = "None";
	unsigned short day = 01;
	unsigned short month = 10;
	unsigned short year = 2009;*/
}
