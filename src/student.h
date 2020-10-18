#ifndef STUDENT
#define STUDENT

#include<iostream>
#include <string>
using namespace std;

class Student {
private:
    int ID;
    string name;
    string address;
    string birthdate;
    Book current_list[3]= {Book()}
public:
  bool valid = true;
  Student();
  Student(int id, string nm, string adrs, string BD);

  void set_ID(int id);
  void set_name(string nm);
  void set_address(string adrs);
  void set_birth_date(string BD);

  int get_ID();
  string get_name();
  string get_address();
  string get_birth_date();
};

#endif 