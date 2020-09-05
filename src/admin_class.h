#include<iostream>
#include"database.h"
include"student.h"
include<string>
class Admin{
  Database database;
  Student student_list[100];
  string student_name,berth_date;
  string student_address;
  int student_id,admin_id;
public:
  void add_student();
  void remove_student();
  void add_admin();
  void remove_admin();
  void add_book();
  void remove_book();
};
