#include <iostream>
#include <string>
using namespace std;

class book {

private :
	string  name;
	string author; 
	int id;

public:
	void set_name(string n) {
		name = n;
	}
	void set_author(string a) {
		author = a;
	}
	void set_id(int i) {
		id = i;
	}
	void get_name(string n) {
		name = n;
	}
	void get_author(string a) {
		author = a;
	}
	void get_id(int i) {
		id = i;
	}




};

book::book(string_in_name, int _in _id, string _in _author) {
	name = in_name;
	id = in_id;
	author = in_author;

}













