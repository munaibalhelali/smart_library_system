#ifndef STUDENT
#define STUDENT

#include <iostream>
#include <string>
#include "smart_library_system/admin.hpp"
#include "smart_library_system/book.hpp"
#include <jsoncons/json.hpp>
#include "smart_library_system/extra_functions.hpp"
using namespace std;

class Student
{
private:
  string ID;
  string name;
  string address;
  string birthdate;

public:
  Book current_list[3] = {Book()};
  bool valid = true;
  Student();
  Student(string id, string nm, string adrs, string BD);

  void set_ID(string id);
  void set_name(string nm);
  void set_address(string adrs);
  void set_birthdate(string BD);

  string get_ID();
  string get_name();
  string get_address();
  string get_birthdate();
  void borrow_book(string book_id);
};

#endif