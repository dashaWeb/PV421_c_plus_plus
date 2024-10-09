#include "library.h"

void printBook(const Book& book, const string text)
{
	cout << "\n\n =============================== " << text << " =============================\n";
	cout << "\t\t Title     :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

void printBooks(const Book* library, const int& size)
{
	for (size_t i = 0; i < size; i++)
	{
		printBook(library[i], "Book #" + to_string(i + 1));
	}
}

void editBook(Book& book)
{
	cout << "\t\t Enter Title     :: "; cin.getline(book.name, SIZE);
	cout << "\t\t Enter Author    :: "; cin.getline(book.author,SIZE);
	cout << "\t\t Enter Publisher :: "; cin.getline(book.publisher,SIZE);
	cout << "\t\t Enter Genre     :: "; cin.getline(book.genre,SIZE);
}

char* toLoweCase(const char* line)
{
	char* str = new char[strlen(line) + 1];
	for (size_t i = 0; i < strlen(line); i++)
	{
		str[i] = tolower(line[i]);
	}
	str[strlen(line)] = '\0';

	return str;
}

int findByAuthor(const Book* library, const int& size, const char* author, int start)
{

	for (size_t i = start; i < size; i++)
	{
		if (strcmp(toLoweCase(library[i].author), toLoweCase(author)) == 0)
			return i;
	}

	return -1;
}

void sortByTitle(Book* library, const int& size)
{
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size-i-1; j++)
		{
			if (strcmp(toLoweCase(library[j].name), toLoweCase(library[j + 1].name)) > 0)
				swap(library[j], library[j + 1]);
		}
	}
}


void remove_(Book*& arr, size_t& length, const size_t& index)
{
	if (index >= length) {
		cout << "Error! out range" << endl;
		return;
	}
	Book* tmp = new Book[--length];
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

void pushBack(Book*& arr, size_t& length, Book value)
{
	Book* tmp = new Book[length + 1];
	for (size_t i = 0; i < length; i++)
	{
		tmp[i] = arr[i];
	}
	tmp[length] = value;
	length++;
	delete[] arr;
	arr = tmp;
}