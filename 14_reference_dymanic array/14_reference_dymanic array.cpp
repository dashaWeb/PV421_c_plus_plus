#include <iostream>
using namespace std;


void Swap(int& a, int& b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

void fill(int* arr, size_t length, int min = 1, int max = 10)
{
    for (size_t i = 0; i < length; i++)
    {
        arr[i] = min + rand() % (max - min + 1);
    }
}
void print(int* arr, size_t length, string prompt = "")
{
    if (!prompt.empty())
        cout << prompt << " :: ";
    for (size_t i = 0; i < length; i++)
    {
        cout << arr[i] << "\t";
    }cout << endl;
}


//template <typename T>
//T* pushBack(T* arr, size_t& length, T value)
//{
//    T* tmp = new T[length + 1];
//    for (size_t i = 0; i < length; i++)
//    {
//        tmp[i] = arr[i];
//    }
//    tmp[length] = value;
//    length++;
//    delete[] arr;
//    return tmp;
//}
template <typename T>
void pushBack(T* &arr, size_t& length, T value)
{
    T* tmp = new T[length + 1];
    for (size_t i = 0; i < length; i++)
    {
        tmp[i] = arr[i];
    }
    tmp[length] = value;
    length++;
    delete[] arr;
    arr = tmp;
}

template <typename T>
void insert(T*& arr, size_t& length, T value, const size_t& index)
{
    if (index > length)
    {
        cout << "Error! out range" << endl;
        return;
    }
    T* tmp = new T[length + 1];
    for (size_t i = 0; i < length; i++)
    {
        if (i < index)
            tmp[i] = arr[i];
        else
            tmp[i + 1] = arr[i];
    }
    tmp[index] = value;
    length++;
    delete[]arr;
    arr = tmp;
}

template <typename T>
void remove(T*& arr, size_t& length, const size_t& index)
{
    if (index >= length) {
        cout << "Error! out range" << endl;
        return;
    }
    T* tmp = new T[--length];
    for (size_t i = 0; i < length; i++)
    {
        if (i < index)
            tmp[i] = arr[i];
        else
            tmp[i] = arr[i + 1];
    }
    delete[] arr;
    arr = tmp;
}
template <typename T>
void popFront(T*& arr, size_t& length, const size_t& index)
{
    //remove(arr, length, 0);
    T* tmp = new T[--length];
    for (size_t i = 0; i < length; i++)
    {
        tmp[i] = arr[i + 1];
    }
    delete[] arr;
    arr = tmp;
}

int main()
{
    int a = 5, b = 10;
    cout << "a :: " << a << "\t b ::" << b << endl;
    Swap(a, b);
    cout << "a :: " << a << "\t b ::" << b << endl;

    int* ptr = new int;
    cout << "address :: " << ptr << " \t value :: " << *ptr << endl;

    size_t size = 10;
    /*cout << "Enter size :: ";
    cin >> size;*/
    int* arr = new int[size];
    fill(arr, size);
    print(arr, size, "Print array ");

    //arr = pushBack(arr, size, 22);
    pushBack(arr, size, 22);
    print(arr, size, "Print push  ");

    insert(arr, size, 33, 3);
    print(arr, size, "Print insert");

    remove(arr, size, 4);
    print(arr, size, "Print remove");

    /*delete [] arr;
    size = 20;
    arr = new int[size];
    print(arr, size, "Print array");*/



    delete[] arr;
}
// Створити функцію яка додає елемент в кінець масиву +
// Створити функцію яка додає елемент на початок масиву
// Створити функцію яка додає елемент за вказаною позицією +
// Створити функцію яка видаляє елемент в кінці масиву
// Створити функцію яка видаляє елемент на початку масиву
// Створити функцію яка видаляє елемент за вказаною позицією +