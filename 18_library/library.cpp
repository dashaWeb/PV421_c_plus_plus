#include "library.h"

void printBooks(Book* library, const int& size)
{
	for (size_t i = 0; i < size; i++)
	{
		printBook(library[i], "Book #" + to_string(i + 1));
	}
}

void printBook(const Book& book, const string& text)
{
	cout << "\n\n\t ========================= " << text << " ============================\n";
	cout << "\t\t Name      :: " << book.name << endl;
	cout << "\t\t Author    :: " << book.author << endl;
	cout << "\t\t Publisher :: " << book.publisher << endl;
	cout << "\t\t Genre     :: " << book.genre << endl;
}

void editBook(Book& book)
{
	cout << "\t\t Enter Name      :: "; cin.getline(book.name, SIZE);
	cout << "\t\t Enter Author    :: "; cin.getline(book.author, SIZE);
	cout << "\t\t Enter Publisher :: "; cin.getline(book.publisher, SIZE);
	cout << "\t\t Enter Genre     :: "; cin.getline(book.genre, SIZE);
}

int findByAuthor(Book* library, const int& size,const char* author, int start)
{
	for (size_t i = start; i < size; i++)
	{
		if (strcmp(toLowerCase(library[i].author), toLowerCase(author)) == 0)
		{
			return i;
		}
	}
	return -1;
}

char* toLowerCase(const char* line)
{
	char* str = new char[strlen(line) + 1];
	for (size_t i = 0; i < strlen(line); i++)
	{
		str[i] = tolower(line[i]);
	}
	str[strlen(line)] = '\0';
	return str;
}

void sortByName(Book* library, const int& size)
{
	for (size_t i = 0; i < size-1; i++)
	{
		for (size_t j = 0; j < size-i-1; j++)
		{
			if (strcmp(toLowerCase(library[j].name), toLowerCase(library[j + 1].name)) > 0) {
				swap(library[j], library[j + 1]);
			}
		}
	}
}

