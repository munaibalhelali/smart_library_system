#ifndef BOOK
#define BOOK

#include <iostream>
#include <string>
using namespace std;
class Book
{

private:
	string name;
	string author;
	string id;
	bool available = true;

public:
	bool valid = true;
	Book();
	Book(string in_name, string in_id, string in_author);
	void set_name(string n);

	void set_author(string a);

	void set_id(string i);

	string get_name();

	string get_author();

	string get_id();

	void make_available(bool status);
};

#endif