#include "book.h"

Book::Book(){
	valid = false;
}
Book::Book(string in_name, string in_id, string in_author) {
	name = in_name;
	id = in_id;
	author = in_author;

}

void Book::set_name(string n) {
	name = n;
}
void Book::set_author(string a) {
	author = a;
}
void Book::set_id(string i) {
	id = i;
}
string Book::get_name() {
	return name;
}
string Book::get_author() {
	return author;
}
string Book::get_id() {
	return id;
} 

void Book::make_available(bool status){
	available = status;
}

















