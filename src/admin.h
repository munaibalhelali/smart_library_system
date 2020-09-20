#ifndef ADMIN
#define ADMIN

#include<iostream>
#include"database.h"
#include"student.h"
#include <string>
class Admin{
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
  void add_student();
  void remove_student();
  void add_admin();
  void remove_admin();
  void add_book();
  void remove_book();
};

#endif