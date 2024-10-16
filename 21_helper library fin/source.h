#pragma once
#include <iostream>
#include <fstream>
#include <string>
using std::string;
using std::cout;
using std::endl;
using std::cin;
using std::swap;
using std::to_string;
using std::ofstream;
using std::ifstream;
using std::ios_base;

const short SIZE = 50;

enum Type
{
	BOOK = 1, MAGAZINE, NEWSPAPER
};

struct Source
{
	Type type;
	char name[SIZE]{};
	char author[SIZE]{};
	char genre[SIZE]{};
	int year;
};


void fillDB();
void editSource(Source& source);
void print(Source source, int index = -1);
void printAll(Source* sources, const int& size, bool numeric = false);
void save(Source source,string fname = "data.dat");
Source* read(int& size, string fname = "data.dat");
