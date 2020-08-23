// Example program
#include <iostream>
#include <string>

class Shelf(){
private:
    size = 20;
    string name;
    int id;
    string location;
    Book available_books[size]={NULL}
    
    
public: 
    Shelf(string in_name, int in_id, string in_location);
    void add_book(Book b);
    void remove_book(string book_name);
};

Shelf::Shelf(string in_name, int in_id, string in_location){
    name = in_name;
    id = in_id;
    location = in_location;
}
Shelf::void add_book(Book b){
    for(int i=0; i<size;i++){
     if (available_books[i] == NULL ){
         available_books[i] = b;
         return
     }
    }
    cout<<"The shelf is full!"<<endl;
}
Shelf::void remove_book(string book_name){
    char confirmation;
    for(int i=0; i<size;i++){
        if (available_books[i] != NULL ){
            if (available_books[i].get_name().compare(book_name) == 0){
                cout<< "Book with title: "<<book_name<<"was found!"<<endl<<"Confirm delete? [y/n]: ";
                cin>>confrimation;
                if (confrimation == 'y'||confirmation == 'Y'){
                    available_books[i] = NULL;  
                    return
                }
            }
     }
    } 
}
