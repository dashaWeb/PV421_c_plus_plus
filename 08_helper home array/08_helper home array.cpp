#include <iostream>
#include <conio.h>
using namespace std;

enum CodeKeyArrow
{
	LEFT = 75, RIGTH = 77, UP = 72, DOWN = 80, ESC = 27
};
int main()
{
	//srand(time(0));
	/*const int row = 4, col = 5;
	int arr[row][col]{};

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	int number = 2;
	for (size_t i = 0; i < number; i++)
	{
		for (size_t i = 0; i < row; i++)
		{
			int temp = arr[i][col - 1];
			for (int j = col - 1; j > 0; j--)
			{
				arr[i][j] = arr[i][j - 1];
			}
			arr[i][0] = temp;
		}
	}



	cout << endl;
	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}*/

	const int row = 4, col = 5;
	int arr[row][col]{};

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10 + 1;
		}
	}

	for (size_t i = 0; i < row; i++)
	{
		for (size_t j = 0; j < col; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	while (true)
	{
		int key = _getch();
		system("cls");
		switch (key)
		{
		case RIGTH:
			for (size_t i = 0; i < row; i++)
			{
				int temp = arr[i][col - 1];
				for (int j = col - 1; j > 0; j--)
				{
					arr[i][j] = arr[i][j - 1];
				}
				arr[i][0] = temp;
			}
			break;
		case LEFT:
			for (size_t i = 0; i < row; i++)
			{
				int temp = arr[i][0];
				for (int j = 0; j < col - 1; j++)
				{
					arr[i][j] = arr[i][j + 1];
				}
				arr[i][col - 1] = temp;
			}
			break;
		case DOWN:
			for (size_t i = 0; i < col; i++)
			{
				int temp = arr[row - 1][i];
				for (int j = row - 1; j > 0; j--)
				{
					arr[j][i] = arr[j - 1][i];
				}
				arr[0][i] = temp;
			}
			break;
		case UP:
			for (size_t i = 0; i < col; i++)
			{
				int temp = arr[0][i];
				for (int j = 0; j < row - 1; j++)
				{
					arr[j][i] = arr[j + 1][i];
				}
				arr[row - 1][i] = temp;
			}
			break;
		}
		if (key == ESC) break;
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}
	}


}
