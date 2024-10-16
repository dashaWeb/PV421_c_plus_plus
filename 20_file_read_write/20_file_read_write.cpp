#include <iostream>
#include <fstream>
#include <string>
using namespace std;


const short SIZE = 50;
struct Book
{
	char name[SIZE]{};
	char author[SIZE]{};
	char publisher[SIZE]{};
	char genre[SIZE]{};
};
// 
//struct Book
//{
//	string name;
//	string author;
//	string publisher;
//	string genre;
//};
int main()
{


	size_t size = 3;
	Book book = { "Harry Potter and the Chamber of Secrets","J.K. rowling","Pottermore Publishing","Children's Fantasy" };
	/*Book* library = new Book[size]{
	   {"Iron Flame","Rebecca Yarros","Entangled: Red Tower Books","Fantasy"},
	   {"The Ever King","LJ Andrews","Victorious","Fantasy"},
	   {"Harry Potter and the Philosopher's Stone","J.K. Rowling","Pottermore Publishing","Children's Fantasy"},
	};*/

	// запис у файл структури
	//fstream file("data.txt", ios_base::out); // створили файловий потік і пов'язали з файлом та налаштували режим на запис
	//if (!file.is_open())
	//{
	//	cout << "Error" << endl;
	//	//return 0;
	//}
	//else {
	//	//file << book; error
	//	file.write((char*)&book, sizeof(book));
	//}
	//file.close();

	// читання з файлу структури
	//fstream file("data.txt", ios_base::in); // створили файловий потік і пов'язали з файлом та налаштували режим на читання
	//if (!file.is_open())
	//{
	//	cout << "Error" << endl;
	//}
	//else {
	//	Book res;
	//	file.read((char*)&res, sizeof(Book));
	//}
	//cout << "\n\n =============================== " << book.name << " =============================\n";
	//cout << "\t\t Author    :: " << book.author << endl;
	//cout << "\t\t Publisher :: " << book.publisher << endl;
	//cout << "\t\t Genre     :: " << book.genre << endl;
	//file.close();

	///////////////////////////
	//fstream file("data.txt", ios_base::out); // створили файловий потік і пов'язали з файлом та налаштували режим на запис
	//if (!file.is_open())
	//{
	//	cout << "Error" << endl;
	//	//return 0;
	//}
	//else {
	//	//file << book; error
	//	for (size_t i = 0; i < size; i++)
	//	{
	//		file.write((char*)&library[i], sizeof(Book));
	//	}
	//}
	//file.close();


	//fstream file("data.txt", ios_base::in); // створили файловий потік і пов'язали з файлом та налаштували режим на читання
	//if (!file.is_open())
	//{
	//	cout << "Error" << endl;
	//}
	//else {
	//	
	//	cout << file.tellg() << endl;
	//	file.seekg(0, ios_base::end);
	//	cout << file.tellg() << endl;
	//	int length = file.tellg() / sizeof(Book);

	//	file.seekg(0);
	//	Book* res = new Book[length];
	//	for (size_t i = 0; i < length; i++)
	//	{
	//		file.read((char*)&res[i], sizeof(Book));
	//	}

	//	for (size_t i = 0; i < length; i++)
	//	{
	//		cout << "\n\n =============================== " << res[i].name << " ("<<(i+1)<<")" << " =============================\n";
	//		cout << "\t\t Author    :: " << res[i].author << endl;
	//		cout << "\t\t Publisher :: " << res[i].publisher << endl;
	//		cout << "\t\t Genre     :: " << res[i].genre << endl;
	//	}
	//	
	//}
	//
	//file.close();



	/*fstream file("text.txt", ios_base::out | ios_base::in | ios_base::app);
	if (!file.is_open())
		cout << "Error";
	else {
		cout << "Start write :: " << file.tellg() << endl;
		file << "Hello world !!" << endl;
		cout << "End write   :: " << file.tellg() << endl;

		file.seekg(0);
		cout << "Start read :: " << file.tellg() << endl;
		string line;
		getline(file, line);
		cout << "Reasult :: " << line << endl;
		cout << "End read   :: " << file.tellg() << endl;
	}*/



	fstream file("data.dat", ios_base::out | ios_base::in | ios_base::app | ios_base::binary);
	if (!file.is_open())
		cout << "Error" << endl;
	else {
		file.write((char*)&book, sizeof(Book));

		file.seekg(0);
		Book res;
		file.read((char*)&res, sizeof(Book));

		cout << "\n\n =============================== " << book.name << " =============================\n";
		cout << "\t\t Author    :: " << book.author << endl;
		cout << "\t\t Publisher :: " << book.publisher << endl;
		cout << "\t\t Genre     :: " << book.genre << endl;
	}
	file.close();

	remove("data.dat");
}
