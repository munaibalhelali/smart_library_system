#ifndef SHELF
#define SHELF
#include <iostream>
#include <string>
#include "book.h"

using namespace std;


class Shelf{
    private:
        string name;
        string id;
        string location;
        Book available_books[20]={Book()};
        
        
    public: 
        Shelf(string in_id, string in_name, string in_location);
        string get_name();
        string get_id()
        string get_location();
        Book get_available_books();
        void add_book(Book b);
        void remove_book(string book_name);
};

#endif