#include <iostream>
using namespace std;


void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void min_max(int arr[], size_t length, int* min, int* max)
{
	*min = arr[0];
	*max = arr[0];

	for (size_t i = 1; i < length; i++)
	{
		if (*min > arr[i])
		{
			*min = arr[i];
		}
		if (*max < arr[i])
		{
			*max = arr[i];
		}
	}
}
//Написати програму, що містить функцію, яка приймає як аргумент покажчики на три масиви та розмір масивів, заносить у масив C суми елементів масивів А і В.Розмір масивів однаковий.
void task(int *a, int *b, int * c, size_t size)
{
	for (size_t i = 0; i < size; i++)
	{
		//c[i] = 
		*(c + i) = *(a + i) + *(b + i);
	}
}
int main()
{
	int a = 15, b = 7;
	int* pointer_a = &a;
	int* pointer_b = &b;
	cout << "Address A :: " << pointer_a << endl;
	cout << "Address B :: " << pointer_b << endl;
	cout << "\n ==================== Test swap ==================" << endl;
	cout <<  "a :: " << a << "\t b :: " << b << endl;
	Swap(pointer_a, &b);
	cout << "a :: " << a << "\t b :: " << b << endl;

	const int size = 10;
	int arr[size]{ 1,5,4,7,8,5,9,6,5,4 };
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}cout << endl;
	int min, max;
	min_max(arr, size, &min, &max);
	cout << "min :: " << min << endl;
	cout << "max :: " << max << endl;
	
	cout << "Test array address --> " << endl;

	cout << "Address cell 1 " << arr << "\t Value :: " << *arr << endl;
	cout << "Address cell 2 " << arr + 1 << "\t Value :: " << *(arr+1) << endl;
	cout << "Address cell 2 " << arr + 2 << "\t Value :: " << *(arr+2) << endl;
	cout << "Address cell 2 " << arr + 3 << "\t Value :: " << *(arr+3) << endl;
	cout << "Address cell 2 " << arr + 4 << "\t Value :: " << *(arr+4) << endl;
	int* ptr = arr;
	cout << "\n\n";
	for (size_t i = 0; i < size; i++)
	{
		cout << "address :: " << ptr << " \t value :: " << *ptr << endl;
		ptr++;
	}

	cout << "\n\n";
	for (size_t i = 0; i < 30; i++)
	{
		ptr--;
		cout << "address :: " << ptr << " \t value :: " << *ptr << endl;
	}
	int a_[size]{}, b_[size]{}, c[size];

	for (size_t i = 0; i < size; i++)
	{
		*(a_ + i) = rand() % 10;
		*(b_ + i) = rand() % 10;
	}
	for (size_t i = 0; i < size; i++)
	{
		cout << a_[i] << "\t";
	}cout << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout << b_[i] << "\t";
	}cout << endl;
	task(a_, b_, c, size);
	for (size_t i = 0; i < size; i++)
	{
		cout << c[i] << "\t";
	}cout << endl;
}


