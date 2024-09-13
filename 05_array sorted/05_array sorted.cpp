#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	const int length = 10;
	int arr[length]{};

	{
		// fill array
		for (size_t i = 0; i < length;)
		{
			int number = rand() % 10 + 1;
			bool flag = true;

			for (size_t j = 0; j < i; j++)
			{
				if (arr[j] == number) {
					flag = false;
					break;
				}
			}

			if (flag)
			{
				arr[i] = number;
				i++;
			}
		}

		cout << "Print array  :: ";
		for (size_t i = 0; i < length; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;


		// sorted array 
		for (size_t j = 0; j < length - 1; j++)
		{
			bool flag = true;
			for (size_t i = 0; i < length - 1 - j; i++)
			{
				if (arr[i] < arr[i + 1]) {
					int temp = arr[i];
					arr[i] = arr[i + 1];
					arr[i + 1] = temp;
					flag = false;
				}
			}
			if (flag)
				break;
		}


		cout << "Sorted array :: ";
		for (size_t i = 0; i < length; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}


	{
		cout << "\n\n";
		// fill array
		for (size_t i = 0; i < length;)
		{
			int number = rand() % 10 + 1;
			bool flag = true;

			for (size_t j = 0; j < i; j++)
			{
				if (arr[j] == number) {
					flag = false;
					break;
				}
			}

			if (flag)
			{
				arr[i] = number;
				i++;
			}
		}

		cout << "Print array  :: ";
		for (size_t i = 0; i < length; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;

		// sorted array

		for (size_t i = 1; i < length; i++)
		{
			int key = arr[i];
			int j = i - 1;
			while (j >= 0 and key < arr[j])
			{
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
		}

		cout << "Print array  :: ";
		for (size_t i = 0; i < length; i++)
		{
			cout << arr[i] << "\t";
		}
		cout << endl;
	}

	cout << "\n\n\n";
	const int size = 5, size2 = 10;
	int one[size]{}, two[size]{}, res[size2]{};

	int min = -10, max = 10;
	for (size_t i = 0; i < size; i++)
	{
		one[i] = rand() % (max - min + 1) + min;
		two[i] = rand() % (max - min + 1) + min;
	}
	cout << "First array  :: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << one[i] << "\t";
	}cout << endl;

	cout << "Second array :: ";
	for (size_t i = 0; i < size; i++)
	{
		cout << two[i] << "\t";
	}cout << endl;

	int j = 0;
	for (size_t i = 0; i < size; i++)
	{
		if (one[i] > 0)
			res[j++] = one[i];
		if (two[i] > 0)
			res[j++] = two[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		if (one[i] == 0)
			res[j++] = one[i];
		if (two[i] == 0)
			res[j++] = two[i];
	}

	for (size_t i = 0; i < size; i++)
	{
		if (one[i] < 0)
			res[j++] = one[i];
		if (two[i] < 0)
			res[j++] = two[i];
	}
	cout << "Result array :: ";
	for (size_t i = 0; i < j; i++)
	{
		cout << res[i] << "\t";
	}cout << endl;
}
