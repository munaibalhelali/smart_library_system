#include <iostream>
using namespace std;

class Student {
  private:
    // Private attribute
    int ID;
    string name;
    string address;
    string birthdate;
    
  public:
  	Student() {
	  }  
  	Student(int id, string nm, string adrs, string BD)  
        {
           ID=id;
           name=nm;
           address=adrs;
           birthdate=BD;
        }
     void set_ID(int id) {
      ID=id;
    }
    void set_name(string nm) {
      name=nm;
    }
     void set_address(string adrs) {
      address=adrs;
    }
    
     void set_birth_date(string BD) {
      birthdate=BD;
    }
    
    int get_id() {
      return ID;
    }
    string get_name() {
      return name;
    }
     string get_address() {
      return address;
    }
     string get_birth_date() {
      return birthdate;
    }
};

int main() {
	
  return 0;
}

