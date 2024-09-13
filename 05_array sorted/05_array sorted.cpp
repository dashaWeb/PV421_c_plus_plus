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

}
