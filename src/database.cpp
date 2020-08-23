#include <iostream>
#include "database.h"


//defintion of the database class funcitons

Database();

//read from files
int database::read_students(){
    ifstream adminFile;
    adminFile.open("data/"+userDetails.name+".txt",ios::in);
    getline (adminFile,line);
    adminFile.close();
}
int database::read_books();
int database::read_admins();
int database::read_shelfs();

//write to files one item a time
int database::write_student(Student student){
    ofstream outputFile("data/"+newAdmin.getUserName()+".txt",ios::out);
    outputFile<<newAdmin.toString();
    outputFile.close();
}
int database::write_book(Book book);
int database::write_admin(Admin admin);
int database::write_shelf(Shelf shelf);

//getters
Student database::get_student(string username);
Book database::get_book(string id);
Admin database::get_admin(sting username);
Shelf database::get_shelf(string id);

