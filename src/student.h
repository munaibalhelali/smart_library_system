#include<iostream>
class Student {
private:
    int ID;
    string name;
    string address;
    string birthdate;

public:
  	Student(int id, string nm, string adrs, string BD)  
      {
        ID=id;
        name=nm;
        address=adrs;
        birthdate=BD;
      }

void set_ID(int id);
void set_name(string nm);
void set_address(string adrs);
void set_birth_date(string BD);

int get_ID();
string get_name();
string get_address();
string get_birth_date();
};