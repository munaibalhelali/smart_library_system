#include <iostream>
#include <string>
#include "student.h"
#include "database.h"
#include "admin_class.h"
using namespace std;

  	Student::Student() {
      
      valid = false;
	  }  
  	Student::Student(string id, string nm, string adrs, string BD)  
        {
           ID=id;
           name=nm;
           address=adrs;
           birthdate=BD;
        }
    void Student::set_ID(string id) {
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
    
    string Student::get_id() {
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
    void borrow_book(string book_id){
      for(int i=0; i<3; i++){
        if(current_list[i].valid == false){
          current_list[i] = database.get_book(book_id);
          return;
        }
        cout<<"You already have three books in your list"<<endl;
      }

};