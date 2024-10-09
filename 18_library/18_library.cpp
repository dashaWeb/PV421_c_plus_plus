#include <iostream>
#include "library.h"
using namespace std;

int main()
{
	size_t size = 10;
	Book* library = new Book[size]{
	   {"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
	   {"The Ever King","LJ Andrews","Victorious","Fantasy"},
	   {"Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
	   {"Harry Potter and the Chamber of Secrets","J.K. rowling","Pottermore Publishing","Children's Fantasy"},
	   {"Harry Potter and the Prisoner of Azkaban","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
	   {"Harry Potter and the Order of the Phoenix","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
	   {"Harry Potter and the Half-Blood Prince","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
	   {"Crown of Blood and Ruin","LJ Andrews","Victorious","Dark Fantasy Horror"},
	   {"Battlefield Reclaimer","David North","High Peak Publishing","Fiction"},
	   {"Swords of Empire","Robert Ryan","Trotting Fox Press","Fantasy"},
	};

	cout << "\n\nTest print book\n";
	printBook(library[0], "Book #1");
	cout << "\n\nTest print books \n";
	printBooks(library, size);


	//cout << "\n\nTest edit book\n";
	//printBook(library[0], "Book Before");
	//editBook(library[0]);
	//printBook(library[0], "Book After");

	cout << "\n\nTest search book\n";

	int res_index = findByAuthor(library, size, "J.K. Rowling");
	while (res_index != -1)
	{
		cout << "index :: " << res_index << endl;
		printBook(library[res_index]);
		res_index = findByAuthor(library, size, "J.K. Rowling", res_index + 1);
	}

	cout << "Test sorted by title" << endl;
	sortByTitle(library, size);
	printBooks(library,size);


	cout << "\n\nTest print books \n";
	printBooks(library, size);

	//res_index = findByAuthor(library, size, "J.K. Rowling");
	//while (res_index != -1)
	//{
	//	remove_(library, size, res_index);
	//	printBooks(library, size);
	//	res_index = findByAuthor(library, size, "J.K. Rowling", res_index);
	//	//system("pause");
	//}


	cout << "\n\nTest add books \n";
	Book book;
	editBook(book);
	pushBack(library, size, book);
	printBooks(library, size);
}
