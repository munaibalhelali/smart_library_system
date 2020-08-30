#include <iostream>
#include <string>
using namespace std;

class Book {

private :
	string  name;
	string author; 
	int id;

public:
    Book(string in_name, int in_id, string in_author);
	void set_name(string n) {
		name = n;
	}
	void set_author(string a) {
		author = a;
	}
	void set_id(int i) {
		id = i;
	}
	string get_name() {
		return name;
	}
	string get_author() {
		return author;
	}
	int get_id() {
		return id;
	} 




};

Book::Book(string in_name, int in_id, string in_author) {
	name = in_name;
	id = in_id;
	author = in_author;

}













