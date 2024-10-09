#include <iostream>
#include <fstream> // read, write
#include <string>

// ofstream --> write (cout)
// ifstream --> read (cin)
// fstream --> read, write;

using namespace std;
int main()
{
	string line = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.";
	string fname = "my.txt";

	ofstream file;

	//file.open(fname, ios_base::app); // mode --> write (w); write and append (wa)
	//if (!file.is_open())
	//	cout << "File not found" << endl;
	//else {
	//	getline(cin, line);
	//	file << line << endl;
	//}

	//file.close();

	/*string numbers = "numbers.txt";
	file.open(numbers, ios_base::app);
	if (!file.is_open())
		cout << "Error! File not found" << endl;
	else
	{
		int number;
		while (cin >> number)
		{
			file << number << endl;
		}
	}*/

	ifstream ifile(fname);
	if (!ifile.is_open())
		cout << "File not found" << endl;
	else
	{
		//cin >> line
		cout << "\n\n Read words " << endl;
		/*while (!ifile.eof())
		{
			ifile >> line;
			cout << "Result read file --> " << line << endl;
		}*/
		cout << "Start read :: " << ifile.tellg() << endl;
		while (ifile >> line)
		{
			cout << "Result read file --> " << line << endl;
			//cout << "End read :: " << ifile.tellg() << endl;
		}
		cout << "End read :: " << ifile.tellg() << endl;

		ifile.clear();
		ifile.seekg(0);

		cout << "Start read :: " << ifile.tellg() << endl;
		cout << "\n\n Read lines " << endl;
		while (getline(ifile,line))
		{
			cout << "Result read file --> " << line << endl;
		}

		char str[100];
		char s;

		ifile.clear();
		ifile.seekg(0);
		cout << "\n\n Read words " << endl;
		while (ifile >> str)
		{
			cout << "Result read file --> " << str << endl;
		}

		ifile.clear();
		ifile.seekg(0);
		cout << "\n\n Read lines " << endl;
		while (ifile.getline(str,100))
		{
			cout << "Result read file --> " << str << endl;
		}

		ifile.clear();
		ifile.seekg(0);
		cout << "\n\n Read symbols " << endl;
		while (ifile.get(s))
		{
			if (s == ' ' or s == '\n')
				continue;
			cout << "Result read file --> " << s << endl;
		}
	}
	ifile.close();
}
