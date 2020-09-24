#ifndef DATABASE
#define DATABASE

#include <iostream>
#include <string>
#include <stdio.h>
#include "student.h"
#include "book.h"
#include "admin.h"
#include "shelf.h"
#include "login_data.h"
#include <jsoncons/json.hpp>
#include <dirent.h>
#include <sys/types.h>
#include <fstream>
using namespace std;


class Database{
    private:
        Student students[];
        Book books[];
        Admin admins[];
        Shelf shelfs[];
    
    public:
        //constructor
        Database();

        //read from file all items at once
        // int read_students();
        Book* read_books();
        // int read_admins();
        // int read_shelfs();

        //write to files one item a time
        int write_student(Student student);
        int write_book(Book book);
        int write_admin(Admin admin);
        int write_shelf(Shelf shelf);

        //getters
        Student get_student(string username);
        Book get_book(string id);
        Admin get_admin(string username);
        Shelf get_shelf(string id);

        //delete funcitons
        int delete_student(string id);
        int delete_book(string id);
        int delete_admin(string id);
        int delete_shelf(string id);

        
        LoginData read_login_data(string username);  
        
};

#endif