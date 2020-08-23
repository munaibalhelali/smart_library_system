#include <iostream>
#include "student.h"
#include "book.h"
#include "admin.h"
#include "shelf.h"

class Database{
    private:
        Student students[];
        Book books[];
        Admin admins[];
        Shelf shelfs[];
    
    public:
        //constructor
        Database();

        //read from files all items at once
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
        Student get_student(string username);
        Book get_book(string id);
        Admin get_admin(sting username);
        Shelf get_shelf(string id);

        

};