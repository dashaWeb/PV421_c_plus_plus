
#include <iostream>
using namespace std;

void printMessage(int age, string name = "Anonim")
{
	if (age < 18)
		return;
	cout << "Hello " << name << " !!! " << endl;
}


int sum(int a, int b)
{
	/*int res = a + b;
	return res;*/
	return a + b;
}
int sub(int a, int b)
{
	return a - b;
}

int mult(int a, int b)
{
	return a * b;
}
double divi(int a, int b)
{
	if (b == 0) {
		return 0;
	}
	return (double)a / b;
}

double calculate(int a, int b, char op)
{
	switch (op)
	{
	case '+':
		return sum(a, b);
	case '-':
		return sub(a, b);
	case '*':
		return mult(a, b);
	case '/':
		return divi(a, b);
	}
	return -1;
}

int main()
{
	printMessage(5, "Masha");
	printMessage(22);
	int res = sum(2, 5);
	cout << sum(4, 5) << endl;

	int one, two;
	char op;
	while (true)
	{
		cout << "Enter a mathematical expression :: ";
		cin >> one >> op >> two;
		cout << one << " " << op << " " << two << " = " << calculate(one, two, op) << endl;
	}
}
