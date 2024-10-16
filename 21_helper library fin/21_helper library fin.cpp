#include <iostream>
#include "source.h"
using namespace std;

int main()
{
	
	int choice;
	

	Source* sources = nullptr;
	int size = 0;
	while (true)
	{
		cout << "\t [1] - fill db; \n\t [2] - print; \n\t [3] - add; \n\t [4] - remove; \n\t [0] - exit; \n\t\t Enter :: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			fillDB();
			break;
		case 2:
			sources = read(size);
			if (sources == nullptr) {
				continue;
			}
			printAll(sources, size,true);
			break;
		case 3:
			Source tmp;
			editSource(tmp);
			save(tmp);
			break;
		}
		if (choice == 0)
			break;
	}
	

}
