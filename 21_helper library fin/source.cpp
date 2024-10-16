#include "source.h"

void fillDB()
{
	int tmp;
	cout << "Enter number of source --> "; cin >> tmp;
	for (size_t i = 0; i < tmp; i++)
	{
		Source temp;
		editSource(temp);
		save(temp);
	}
}

void editSource(Source& source)
{
	int tmp;
	cout << "Enter type fo source ([1] - BOOK, [2] - MAGAZINE, [3] - NEWSPAPER) --> ";
	cin >> tmp;
	source.type = (Type)tmp;

	cin.ignore();
	cout << "Enter title  --> "; cin.getline(source.name, SIZE);
	if (source.type == Type::BOOK)
	{
		cout << "Enter author --> "; cin.getline(source.author, SIZE);
		cout << "Enter genre  --> "; cin.getline(source.genre, SIZE);
	}
	cout << "Enter year   --> "; cin >> source.year;
}

void print(Source source, int index)
{
	string line = "==================================";
	cout << "\n\t" << line << " " << (index != -1 ?"#" + to_string(index) + " " : "") << (source.type == Type::BOOK ? "BOOK" : (source.type == Type::MAGAZINE) ? "MAGAZINE" : "NEWSPAPER") << " " << line << endl;
	cout << "\t\t Title  :: " << source.name << endl;
	if (source.type == Type::BOOK)
	{
		cout << "\t\t Author :: " << source.author << endl;
		cout << "\t\t Genge  :: " << source.genre << endl;
	}
	cout << "\t\t Year   :: " << source.year << endl;
}

void printAll(Source* sources, const int& size, bool numeric)
{

	for (size_t i = 0; i < size; i++)
	{
		numeric ? print(sources[i], i + 1) : print(sources[i]);
	}
}

void save(Source source, string fname)
{
	ofstream file(fname, ios_base::app | ios_base::binary);
	if (!file.is_open()) {
		cout << "Error" << endl;
		return;
	}

	file.write((char*)&source, sizeof(Source));
	file.close();
}

Source* read(int& size, string fname)
{
	ifstream file(fname);
	if (!file.is_open()) {
		cout << "Error file read" << endl;
		return nullptr;
	}

	file.seekg(0, ios_base::end);
	if (file.tellg() == 0)
	{
		cout << "Error file read" << endl;
		return nullptr;
	}
	size = file.tellg() / sizeof(Source);
	file.seekg(0);

	Source* tmp = new Source[size];
	for (size_t i = 0; i < size; i++)
	{
		file.read((char*)&tmp[i], sizeof(Source));
	}
	file.close();
	return tmp;
}

void clear(Source*& sources, int& size)
{
	if (sources != nullptr)
	{
		delete[] sources;
		sources = nullptr;
		size = 0;
	}
}

void remove_(Source* sources, const size_t& size, const int& id, string fname)
{
	remove(fname.c_str());
	for (size_t i = 0; i < size-1; i++)
	{
		i < (id-1) ? save(sources[i]) : save(sources[i + 1]);
	}
}


