#ifndef ADMIN
#define ADMIN

#include <iostream>
#include "database.h"
#include "student.h"
#include <string>
namespace ADMIN_S{

  class Admin{
    private:
      Database database;
      string name;
      string id;
      string address;
      string birthdate;

    // Student student_list[100];
    // string student_name,birth_date;
    // string student_address;
    // int student_id,admin_id;
    public:

      Admin();
      Admin(string id, string name, string address, string birthdate);
      
      void set_id(int id);
      void set_name(string name);
      void set_address(string adrdress);
      void set_birth_date(string birthdate);

      int get_id();
      string get_name();
      string get_address();
      string get_birth_date();

      void add_student();
      void remove_student();
      void add_admin();
      void remove_admin();
      void add_book();
      void remove_book();
    };
}
#endif