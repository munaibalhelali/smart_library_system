#ifndef ADMIN
#define ADMIN

#include <iostream>
#include "smart_library_system/student.hpp"
#include "smart_library_system/book.hpp"
#include <string>
#include <fstream>
#include "smart_library_system/login_data.hpp"
using namespace std;

class Admin
{
  //Database database;
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

  void set_id(string id);
  void set_name(string name);
  void set_address(string adrdress);
  void set_birthdate(string birthdate);

  string get_id();
  string get_name();
  string get_address();
  string get_birthdate();

  void add_student();
  void remove_student();
  void add_admin();
  void remove_admin();
  void add_book();
  void remove_book();
};

#endif