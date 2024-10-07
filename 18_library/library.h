#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::swap;
using std::to_string;

const short SIZE = 50;
//(назва, автор, видавництво, жанр)
struct Book
{
	char name[SIZE]{};
	char author[SIZE]{};
	char publisher[SIZE]{};
	char genre[SIZE]{};
};

void printBooks(Book* library, const int& size);
void printBook(const Book& book, const string& text = "");
void editBook(Book& book);
int findByAuthor(Book* library, const int& size, const char* author, int start = 0);
char* toLowerCase(const char* line);
void sortByName(Book* library, const int& size);
