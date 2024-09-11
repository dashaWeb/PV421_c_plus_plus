#include <iostream>
#include <ctime>
using namespace std;


int main()
{

	/*int i = 0;
	while (i < 10)
	{
		cout << ++i << "\t";
	}
	cout << endl;*/


	/*int answer;
	do
	{
		cout << "2 + 2 = ? --> ";
		cin >> answer;
	} while (answer != 4);*/

	/*size_t i = 0;
	for (;;)
	{
		i++;
		cout << i << endl;
		if (i == 5)
			break;
	}
	cout << "===================" << endl;
	cout << i << endl;*/

	/*
	1  10
	2  9
	3  8
	*/
	/*for (size_t i = 1, j = 10; i <= 10; i++, j--)
	{
		cout << i << "\t" << j << endl;
	}*/

	/*int number, counter = 0;
	cout << "Enter number --> ";
	cin >> number;

	for (size_t i = 1; i <= number; i++)
	{
		if (number % i == 0)
			counter++;
	}

	if (counter > 2)
		cout << "This number is complex" << endl;
	else
		cout << "This number is prime" << endl;*/



		/*int number;
		bool flag = true;
		cout << "Enter number --> ";
		cin >> number;

		for (size_t i = 2; i <= number/2; i++)
		{
			if (number % i == 0)
			{
				flag = false;
				break;
			}
		}

		if (!flag)
			cout << "This number is complex" << endl;
		else
			cout << "This number is prime" << endl;*/


			/*for (size_t i = 1; i <=20; i++)
			{
				if (i % 3 == 0)
					continue;

				cout << i << "\t";
			}
			cout << endl;*/

			/*for (int i = 10; i >= 0; i--)
			{
				cout << i << "\t";
			}cout << endl;*/

	srand(time(0));
	int number = 12;
	int	min = -5, max = 5;
	for (size_t i = 0; i < number; i++)
	{
		cout << min + rand() % (max - min + 1) << endl;
	}
	//  0 - 10
	//	5 - 15
	// min + rand() % (max - min + 1)

}

