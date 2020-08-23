#include <iostream>
#include "database.h"


//defintion of the database class funcitons

Database();

//read from files
int read_students(){
    ifstream adminFile;
    adminFile.open("data/"+userDetails.name+".txt",ios::in);
    getline (adminFile,line);
    adminFile.close();
}
int read_books();
int read_admins();
int read_shelfs();

//write to files one item a time
int write_student(Student student){
    ofstream outputFile("data/"+newAdmin.getUserName()+".txt",ios::out);
    outputFile<<newAdmin.toString();
    outputFile.close();
}
int write_book(Book book);
int write_admin(Admin admin);
int write_shelf(Shelf shelf);

//getters
Student get_student(string username);
Book get_book(string id);
Admin get_admin(sting username);
Shelf get_shelf(string id);

