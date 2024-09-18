#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	const int row = 4, col = 4;
	int arr[row][col]{};

	/*arr[0][0] = rand() % 10 + 1;
	arr[0][1] = rand() % 10 + 1;
	arr[0][2] = rand() % 10 + 1;
	arr[0][3] = rand() % 10 + 1;*/

	/*for (size_t j = 0; j < col; j++)
	{
		arr[0][j] = rand() % 10 + 1;
	}
	for (size_t j = 0; j < col; j++)
	{
		arr[1][j] = rand() % 10 + 1;
	}
	for (size_t j = 0; j < col; j++)
	{
		arr[2][j] = rand() % 10 + 1;
	}
	for (size_t j = 0; j < col; j++)
	{
		arr[3][j] = rand() % 10 + 1;
	}*/
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

	cout << "\n\n =======================================================\n\n";
	const int block = 3, row_ = 4, col_ = 5;
	int mas[block][row_][col_]{};

	for (size_t i = 0; i < block; i++)
	{
		for (size_t j = 0; j < row_; j++)
		{
			for (size_t q = 0; q < col_; q++)
			{
				mas[i][j][q] = rand() % 10 + 1;
				cout << mas[i][j][q] << "\t";
			}
			cout << endl;
		}

		cout << "\n\n";
	}

	cout << "\n\n ============================== Task 3 ====================================\n\n";
	{
		const int row = 5, col = 10;
		int arr[row][col]{};
		int res[row][row]{};
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				arr[i][j] = rand() % 50;
				cout << arr[i][j]<< "\t";
			}
			cout << endl;
		}

		cout << endl;
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < row; j++)
			{
				res[i][j] = arr[i][j * 2] + arr[i][j * 2 + 1];
				cout << res[i][j] << "\t";
			}cout << endl;
		}

	}


	{
	
		cout << ":::::::::::::::::::::::::::::::::::::::::::::task2\n";
		int SUM = 0;
		for (size_t i = 0; i < row; i++)
		{
			for (size_t j = 0; j < col; j++)
			{
				SUM += arr[i][j];
				cout << arr[i][j] << "\t";
			}
			cout << "|" << SUM << endl;
		}
		for (size_t j = 0; j < row; j++)
		{
			for (size_t i = 0; i < col; i++)
			{
				SUM += arr[i][j];
				cout << SUM;
			}
		}

		cout << ":::::::::::::::::::::::::::::::::::::::::::::task2\n";

	}
}

