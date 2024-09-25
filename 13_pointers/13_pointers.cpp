#include <iostream>
using namespace std;


void Swap(int* a, int* b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
    cout << "swap address a :: " << a << endl;
    cout << "swap address b :: " << b << endl;
}

void min_max(int arr[], size_t length, int* out_min, int* out_max)
{
    *out_min = arr[0];
    *out_max = arr[0];
    for (size_t i = 1; i < length; i++)
    {
        if (*out_min > arr[i]) {
            *out_min = arr[i];
        }
        if (*out_max < arr[i]) {
            *out_max = arr[i];
        }
    }

}
void print(int arr[], size_t length, string prompt = "")
{
    if (!prompt.empty())
        cout << prompt << " :: ";
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }cout << endl;
}

//Написати програму, що містить функцію, яка приймає як аргумент покажчики на три масиви та розмір масивів, заносить у масив C суми елементів масивів А і В.Розмір масивів однаковий.
void fillC(int* a, int* b, int* c, size_t length)
{
    /*int* ptr_a = a, * ptr_b = b, * ptr_c = c;*/
    for (size_t i = 0; i < length; i++)
    {
        *c = *a + *b;
        c++;
        a++;
        b++;
        //*(c + i) = *(a + i) + *(b + i);
    }
}
int main()
{
    int a = 5, b = 10;
    int* pointer_a = &a;
    int* pointer_b = &b;
    cout << "main address a :: " << pointer_a << endl;
    cout << "main address b :: " << pointer_b << endl;
    cout << "a :: " << a << "\t b :: " << b << endl;
    Swap(pointer_a, &b);
    cout << "a :: " << a << "\t b :: " << b << endl;

    const int size = 10;
    int arr[size]{ 4,9,47,8,5,4,8,5,2,1 };
    print(arr, size);
    int min, max;
    min_max(arr, size, &min, &max);
    cout << "min :: " << min << endl;
    cout << "max :: " << max << endl;

    cout << "address arr :: " << arr + 0 << " \t value :: " << *(arr + 0) << endl;
    cout << "address arr :: " << arr + 1 << " \t value :: " << *(arr + 1) << endl;
    cout << "address arr :: " << arr + 2 << " \t value :: " << *(arr + 2) << endl;
    cout << "address arr :: " << arr + 3 << " \t value :: " << *(arr + 3) << endl;

    cout << "address arr :: " << arr + 33 << " \t value :: " << *(arr + 33) << endl;

    int* ptr = arr;
    for (size_t i = 0; i < size; i++)
    {
        cout << *ptr << "\t";
        ptr++;
    }
    cout << endl;
    for (size_t i = 0; i < size; i++)
    {
        ptr--;
        cout << *ptr << "\t";
    }
    cout << endl;
    int A[size], B[size], C[size];
    for (size_t i = 0; i < size; i++)
    {
        A[i] = rand() % 10;
        B[i] = rand() % 10;
    }
    cout << endl;
    print(A, size, "Print array A ");
    print(B, size, "Print array B ");
    fillC(A, B, C, size);
    print(C, size, "Print array C ");
}
