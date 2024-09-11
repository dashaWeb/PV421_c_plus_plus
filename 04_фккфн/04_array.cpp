#include <iostream>
#include <ctime>
using namespace std;


int main()
{
	srand(time(0));
	const int SIZE = 10;
	int arr[SIZE];
	/*arr[0] = rand() % 10 + 1;
	arr[1] = rand() % 10 + 1;
	arr[2] = rand() % 10 + 1;
	arr[3] = rand() % 10 + 1;
	arr[4] = rand() % 10 + 1;*/

	for (size_t i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 10 + 1;
	}

	cout << "Print array :: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	cout << "\n\nReversed array :: ";

	for (int i = SIZE - 1; i >= 0 ; i--)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;


	cout << endl << endl;

	int arr2[SIZE];
	for (size_t i = 0; i < SIZE;)
	{
		int number = rand() % 10 + 1;
		bool flag = true;

		for (size_t j = 0; j < i; j++)
		{
			if (arr2[j] == number)
			{
				flag = false;
				break;
			}
		}
		if (flag) {
			arr2[i] = number;
			i++;
		}
	}
	cout << "Unique Array :: ";
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr2[i] << "\t";
	}
	cout << endl;

	cout << " Array :: ";
	int arr3[SIZE]{};
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr3[i] << "\t";
	}
	cout << endl;

	cout << " Array :: ";
	int arr4[SIZE]{15,25,35,45,55,65};
	for (size_t i = 0; i < SIZE; i++)
	{
		cout << arr4[i] << "\t";
	}
	cout << endl;

	int arr5[]{ 11,22,33,44};
	cout << "Size bytes variable SIZE :: " << sizeof(SIZE) << endl;
	cout << "Size bytes types int :: " << sizeof(int) << endl;
	cout << "Size bytes types short :: " << sizeof(short) << endl;
	cout << "Size bytes types char :: " << sizeof(char) << endl;
	cout << "Size bytes types long long :: " << sizeof(long long) << endl;
	cout << "Size bytes Array :: " << sizeof(arr5) << endl;
	cout << "Number of elements Array :: " << sizeof(arr5) / sizeof(arr5[0]) << endl;

	int size = sizeof(arr5) / sizeof(arr5[0]);
	cout << " Array :: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << arr5[i] << "\t";
	}
	cout << endl;
}
