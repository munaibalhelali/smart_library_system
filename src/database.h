#include <iostream>
#include <string>

#include "student.h"
#include "book.h"
#include "admin.h"
#include "shelf.h"
#include "login_data.h"
#include <jsoncons/json.hpp>
#include <dirent.h>
#include <sys/types.h>

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
        int read_students();
        int read_books();
        int read_admins();
        int read_shelfs();

        //write to files one item a time
        int write_student(Student student);
        int write_book(Book book);
        int write_admin(Admin admin);
        int write_shelf(Shelf shelf);

        //getters
        auto get_student(string username);
        auto get_book(string id);
        auto get_admin(sting username);
        auto get_shelf(string id);

        //delete funcitons
        int delete_student(int id);
        int delete_book(int id);
        int delete_admin(int id);
        int delete_shelf(int id);

        
        LoginData read_login_data(string username);  
        
};