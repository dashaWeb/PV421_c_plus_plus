#pragma once
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::swap;
using std::to_string;

const short SIZE = 50;
struct Book
{
	char name[SIZE]{};
	char author[SIZE]{};
	char publisher[SIZE]{};
	char genre[SIZE]{};
};

void printBook(const Book& book, const string text = "");
void printBooks(const Book* library, const int& size);
void editBook(Book& book);
char* toLoweCase(const char* line);
int findByAuthor(const Book* library, const int& size, const char* author, int start = 0);
void sortByTitle(Book* library, const int& size);
void remove_(Book*& arr, size_t& length, const size_t& index);
void pushBack(Book*& arr, size_t& length, Book value);