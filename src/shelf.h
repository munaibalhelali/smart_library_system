#include <iostream>
#include <string>

class Shelf(){
    private:
        string name;
        string id;
        string location;
        Book available_books[20]={NULL};
        
        
    public: 
        Shelf(string in_id, string in_name, string in_location);
        void add_book(Book b);
        void remove_book(string book_name);
};
