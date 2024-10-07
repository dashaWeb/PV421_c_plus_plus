#include <iostream>
using namespace std;

template <typename T>
void fill(T** arr, const size_t& row, const size_t& col, int min = 1, int max = 10)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = min + rand() % (max - min + 1);
        }
    }
}
template <typename T>
void print(T** arr, const size_t& row, const size_t& col, string prompt = "")
{
    if (!prompt.empty())
        cout << prompt << " :: " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }cout << endl;
    }
}
template <typename T>
void insert(T**& arr, int& row, const size_t& col, const size_t& index)
{
    if (index > row) {
        cout << "Error! out range !!" << endl;
        return;
    }
    T** tmp = new T * [row + 1];
    for (size_t i = 0; i < row; i++)
    {
        if (i < index)
        {
            tmp[i] = arr[i];
        }
        else {
            tmp[i + 1] = arr[i];
        }
    }
    tmp[index] = new T[col]{};
    delete[] arr;
    row++;
    arr = tmp;
}

template <typename T>
void remove(T**& arr, int& row, const size_t& index)
{
    if (index >= row) {
        cout << "Error. out-of-range index" << endl;
        return;
    }
    T** temp = new T * [--row];
    for (size_t i = 0; i < row; i++)
    {
        if (i < index)
        {
            temp[i] = arr[i];
        }
        else {
            temp[i] = arr[i + 1];
        }
    }
    delete[] arr[index];
    delete[] arr;
    arr = temp;
}

template<typename T>
void insertCol(T** arr, const size_t& row, int& col, const size_t& index, T value = T())
{
    if (index > col) {
        cout << "Error! The index is out of range" << endl;
        return;
    }
    for (size_t i = 0; i < row; i++)
    {
        T* tmp = new T[col + 1];
        for (size_t j = 0; j < col; j++)
        {
            if (j < index)
                tmp[j] = arr[i][j];
            else
                tmp[j + 1] = arr[i][j];
        }
        tmp[index] = value;
        delete[] arr[i];
        arr[i] = tmp;
    }
    col++;
}
template <typename T>
void removeCol(T** arr, const size_t& row, int& col, const size_t& index) {
    if (index >= col)
    {
        cout << "Error! The index is out of range" << endl;
        return;
    }
    col--;
    for (size_t i = 0; i < row; i++)
    {
        T* tmp = new T[col];
        for (size_t j = 0; j < col; j++)
        {
            if (j < index)
                tmp[j] = arr[i][j];
            else
                tmp[j] = arr[i][j + 1];
        }
        delete[] arr[i];
        arr[i] = tmp;
    }
}
int main()
{
    int row = 4, col = 5;

    // create array
    int** arr = new int* [row];
    /*arr[0] = new int[col];
    arr[1] = new int[col];*/
    for (size_t i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    fill(arr, row, col);
    print(arr, row, col, "Print array");

    insert(arr, row, col, 2);
    print(arr, row, col, "Print array after insert ROW");

    remove(arr, row, 3);
    print(arr, row, col, "Print array after remove ROW");

    insertCol(arr, row, col, 3, -1);
    print(arr, row, col, "Print array after insert COL");

    removeCol(arr, row, col, 2);
    print(arr, row, col, "Print array after remove COL");

    for (size_t i = 0; i < row; i++)
    {
        delete[] arr[i];
    }
    delete[]arr;


    //test
    /*int z = 2, y = 3, x = 4;
    int*** mas = new int** [z];
    for (size_t i = 0; i < z; i++)
    {
        mas[i] = new int* [y];
        for (size_t j = 0; j < y; j++)
        {
            mas[i][j] = new int[x];
        }
    }
    for (size_t i = 0; i < z; i++)
    {
        for (size_t j = 0; j < y; j++)
        {
            for (size_t q = 0; q < x; q++)
            {
                mas[i][j][q] = rand() % 10 + 1;
            }
        }
    }
    for (size_t i = 0; i < z; i++)
    {
        cout << "block " << i + 1 << endl;
        for (size_t j = 0; j < y; j++)
        {
            for (size_t q = 0; q < x; q++)
            {
                cout << mas[i][j][q] << "\t";
            }cout << endl;
        }
        cout << endl;
    }*/
}