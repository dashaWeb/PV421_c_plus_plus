#include <iostream>
using namespace std;

template <typename T>
void uniqValue(T arr[], size_t length, int min = 1, int max = 10)
{
	bool flag;
	for (size_t i = 0; i < length;)
	{
		T number = min + rand() % (max - min + 1);
		flag = true;
		for (size_t j = 0; j < i; j++)
		{
			if (arr[j] == number) {
				flag = false;
				break;
			}
		}
		if (flag)
		{
			arr[i++] = number;
		}
	}
}

template <typename T>
void printArray(T arr[], size_t length, string prompt = "") {
	if (!prompt.empty())
		cout << prompt << " :: \t";
	for (size_t i = 0; i < length; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
}

template <typename T>
void quickSort(T arr[], int left, int right)
{
	int tmp_l = left;
	int tmp_r = right;
	T pivot = arr[left];
	while (left < right)
	{
		while (arr[right] > pivot and left < right) right--;
		if (left != right) {
			arr[left] = arr[right];
			left++;
		}
		while (arr[left] < pivot and left < right) left++;
		if (left != right) {
			arr[right] = arr[left];
			right--;
		}
	}

	arr[left] = pivot;
	int index = left;
	left = tmp_l;
	right = tmp_r;
	if (index > left)
	{
		quickSort(arr, left, index - 1);
	}
	if (index < right)
	{
		quickSort(arr, index + 1, right);
	}
}

template <typename T>
int binarySearch(T arr[], int left, int right, T key)
{
	if (left > right) return -1;
	int middle = (left + right) / 2;
	if (arr[middle] == key) return middle;

	if (key < arr[middle])
	{
		binarySearch(arr, left, middle - 1, key);
	}
	else if (key > arr[middle])
	{
		binarySearch(arr, middle + 1, right, key);
	}
}

int main()
{
	const int size = 10;
	int arr[size]{};
	uniqValue(arr, size);
	cout << binarySearch(arr, 0, size - 1, 4) << endl;
	printArray(arr, size, "Print Unique array ");
	quickSort(arr, 0, size - 1);
	printArray(arr, size, "Print Sorted array ");
	cout << binarySearch(arr, 0, size - 1, 44) << endl;
}


