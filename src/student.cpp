#include <iostream>
#include <string>
#include "student.h"
#include "database.h"
#include "admin_class.h"
using namespace std;

  	Student::Student() {
      valid = false;
	  }  
  	Student::Student(int id, string nm, string adrs, string BD)  
        {
           ID=id;
           name=nm;
           address=adrs;
           birthdate=BD;
        }
    void Student::set_ID(int id) {
      ID=id;
    }
    void Student::set_name(string nm) {
      name=nm;
    }
     void Student::set_address(string adrs) {
      address=adrs;
    }
    
     void Student::set_birth_date(string BD) {
      birthdate=BD;
    }
    
    int Student::get_id() {
      return ID;
    }
    string Student::get_name() {
      return name;
    }
     string Student::get_address() {
      return address;
    }
     string Student::get_birth_date() {
      return birthdate;
    }
};