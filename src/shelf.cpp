#include "shelf.h"


Shelf::Shelf(string in_id , string in_name, string in_location){
    name = in_name;
    id = in_id;
    location = in_location;
}

string Shelf::get_name(){
    return name;
}
string Shelf::get_id(){
    return id;
}
string Shelf::get_location(){
    return location;
}
Book Shelf::get_available_books(){
    return available_books;
}

void Shelf::add_book(Book b){
    for(int i=0; i<size;i++){
     if (available_books[i].valide == false ){
         available_books[i] = b;
         return
     }
    }
    cout<<"The shelf is full!"<<endl;
}
void Shelf::remove_book(string book_name){
    char confirmation;
    for(int i=0; i<size;i++){
        if (available_books[i] .valide != false ){
            if (available_books[i].get_name().compare(book_name) == 0){
                cout<< "Book with title: "<<book_name<<"was found!"<<endl<<"Confirm delete? [y/n]: ";
                cin>>confrimation;
                if (confrimation == 'y'||confirmation == 'Y'){
                    available_books[i].valid = false;  
                    return
                }
            }
     }
    } 
}
