#include "shelf.h"

Shelf::Shelf(string in_id , string in_name, string in_location){
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
