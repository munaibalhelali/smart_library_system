#include<iostream>
#include <string>
#include<fstream>
#include "student.h"
#include "database.h"
using namespace std;
class Admin{
    private:
    Database database;
    Student student_list[100];
   string student_name,berth_date,student_address;
   int student_id,admin_id;
    public:
    void add_student();
    void remove_student();
    void add_admin();
    void remove_admin();
    void add_book();
    void remove_book();
};
void Admin::add_student(){
    Student student_temp;
    string student_temp;
    string student_temp;
    char confirm;
    cout<<" please enter student name : "<<endl;
    cin>>temp;
    student_temp.set_name(temp);
    cout<<endl<<"please enter student id: "<<endl;
    cin>>int_temp;
    student_temp.set_id(int_temp);
    cout<<endl<<"please enter student birthdate :";
    cin>>student_temp;
    student_temp.set_birthdate(student_temp);
    cout<<endl<<"please enter student address :";
    cin>>student_temp;
    student_temp.set_address(student_temp);
    cout<<"Do you want to save the student information?[y/n]: ";
    cin>>confirm;
    if (confirm == 'y' || confirm == 'Y'){
        database.write_student(std_temp);
    }

    return ;
}
void Admin::remove_student(){
    cout<<"please enter student id : ";
    cin<<student_id;
datebase.get_student(student_id);
}
void Admin::add_admin(){

admin admin_temp;
    string admin_temp;
    string admin_temp;
    char confirm;
    cout<<"please enter admin name : "<<endl;
    cin>>temp;
    admin_temp.set_name(temp);
    cout<<endl<<"please enter admin id: "<<endl;
    cin>>int_temp;
    admin_temp.set_id(int_temp);
    cout<<endl<<"please enter admin birthdate :";
    cin>>admin_temp;
    admin_temp.set_birthdate(admin_temp);
    cout<<endl<<"please enter admin address :";
    cin>>admin_temp;
    admin_temp.set_address(admin_temp);
    cout<<"Do you want to save the admin information?[y/n]: ";
    cin>>confirm;
    if (confirm == 'y' || confirm == 'Y'){
        database.write_student(admin_temp);
    }

    return ;
}
void Admin::remove_student(){
    cout<<"please enter student id : ";
    cin<<admine_id;
datebase.get_student(admin_id);
}
void Admin::add_book(){
    book book_temp;
    string book_temp;
    string book_temp;
    char confirm;
    cout<<"please enter book name : "<<endl;
    cin>>temp;
    book_temp.set_name(temp);
    cout<<endl<<"please enter book id: "<<endl;
    cin>>int_temp;
    book_temp.set_id(int_temp);
    cout<<endl<<"please enter book auther :";
    cin>>book_temp;
    book_temp.set_auther(book_temp);
    cout<<"Do you want to save the student information?[y/n]: ";
    cin>>confirm;
    if (confirm == 'y' || confirm == 'Y'){
        database.write_book(book_temp);
    }

    return ;
}
void Admin::remove_book(){
    cout<<"please enter book id : ";
    cin<<book_id;
datebase.get_student(student_id);
}