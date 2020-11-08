#include <iostream>
// #include "admin_driver.h"
// #include "student_view.h"
#include<string>
#include"admin.h"
#include "database.h"
using namespace std;
void student_view();
void return_book();
void borrow_book();
void view_current_list();
Book* read_books();
void admin_view();
void student();
void admin();
void book();


Student curr_student;

int  check[3];
int main(void ){
    int user_input;
    cout<<"Welcome to Smart Library System (SLS)!"<<endl;
    while(true){
        
        cout<<"Choose user type:\n[1] Admin\n[2] Student\n[3] Quit program"<<endl;
        cout<<"Your input: ";
        cin>>user_input;

        if(user_input == 1){
            admin_view();
        }else if(user_input == 2){
            student_view();
        }else if (user_input == 3){
            break;
        }else{
            cout<<"Invalid input!"<<endl;
        }
    }
    


    return 0;
}

void student_view(){
    // promote user for choice
    int choice;
    while(true){
        cout<< "Please choose one of the following options:\
                    \n[1] Borrow a book\
                    \n[2] Return a book\
                    \n[3] Show borrowed book list\
                    \n[4] Quit"<<endl<<"Your choice[1/2/3/4]: ";

        cin>>choice;
        switch(choice){
            case 1:
                borrow_book();
                break;
            case 2:
                return_book();
                break;
            case 3:
                view_current_list();
                break;
            case 4:
                return;
            default:
                cout<<"Input is not valid. Try again!"<<endl;
        }
        
    }
}



void return_book(){
    int size = sizeof(curr_student.current_list);
    int choice;
    char confirm;
    string id;
    Book book;
    cout<<"Your list of borrowed books:"<<endl;
    for(int i=0; i<size ; i++){
        
        id = curr_student.current_list[i].get_id();
        if (id != ""){
            book = Database().get_book(id );
            cout<<"["<<i+1<<"]"<<book.get_name()<<endl;
        }
    }
    cout<<"Choose a book to return: ";
    cin>> choice;
    id = curr_student.current_list[choice-1].get_id();
    book = Database().get_book(id );
    cout << "You choosed the following book:\n"<<book.get_name()<<endl;
    cout<<"Confirm [y/n]: ";
    cin>>confirm;
    if (confirm =='y'|| confirm=='Y'){
        curr_student.current_list[choice-1].get_id() = "";
        book.make_available(true);
        Database().write_book(book);
        Database().write_student((Student)curr_student);

        cout<<"Success!"<<endl;
    }

}

void borrow_book(){
    Book* book_list = read_books();
    int size = sizeof(*book_list);
    int choice;
    char confirm;

    cout<<"List of available books:"<<endl;
    for(int i=0; i<size ; i++){
        
        Book book = book_list[i];
        cout<<"["<<i+1<<"]"<<book.get_name()<<endl;
    
    }
    cout<<"Choose a book to return: ";
    cin>> choice;

    cout << "You choosed the following book:\n"<<book_list[choice-1].get_name()<<endl;
    cout<<"Confirm [y/n]: ";
    cin>>confirm;
    if (confirm =='y'|| confirm=='Y'){
        curr_student.current_list[choice-1].get_id() = book_list[choice-1].get_id();
        book_list[choice-1].make_available(false);
        Database().write_book(book_list[choice-1]);
        Database().write_student((Student)curr_student);
        cout<<"Success!"<<endl;
    }

}
void view_current_list(){
for(int i=0; i<3; i++){
    cout<<curr_student.current_list[i].get_name();
}
}


void admin_view(){
    cout<<"hello and wellcom admin ! "<<endl;
    cout<<"please chooose a process : "<<endl;
    cout<<"1-add  or remove an student\n 2-add or remove an admin \n 3-add or remove  a book "<<endl;
    cin>>check[0];
    // if (check[0]==0){
    //     review(); //ashraf must do it 
    // }
    switch (check[0])
    {
    case 1 :
        student();
        break;
    case 2:
        admin();
        break;
    case 3:
        book();
        break;
    default:
        cout<<"please enter avilable value  ,or press 0 to exit this page !!"<<endl;
        admin_view();
        break;
    }
}
void student(){
    while(true){
        cout<<"1-add student \n2-remove student ";
        cin>>check[1];
        Admin case1;
        if (check[1]==1)
        {
        case1.add_student();
        cout<<"the process has been done !"<<endl; 
         cout<<"would you like to add/remove more student  {1-yes \n 2-no} ";
        cin>>check[2];
        if(check[2]==2){
            break;
            }
        }
        else if(check[1]==2){
        case1.remove_student();
        cout<<"the process has been done !";
        }
    }
    
}
 void admin(){
    Admin case2;
    while(true){
        cout<<"1-add admin \n 2-remove admin";
        cin>>check[1];
        if (check[1]==1)
        {
            case2.add_admin();
            cout<<"the process has been done !"<<endl;
            cout<<"would you like to add/remove more Ddmins  {1-yes \n 2-no} ";
            cin>>check[2];
            if(check[2]==2){
                break;
                }
        }
        else if(check[1]==2){
            case2.remove_admin();
            cout<<"the process has been done !"<<endl;
            cout<<"would you like to add/remove more Ddmins  {1-yes \n 2-no} ";
            cin>>check[2];
            if(check[2]==2){
                break;
            }
        }
    }
    
        }
void book(){
Admin case3;
while(true){
    cout<<"1-add book \n 2-remove book";
    if (check[1]==1)
        {
        case3.add_book();
        cout<<"would you like to add more book \n 1-yes \n 2-no";
        cin>>check[2];
        if(check[2]==2){
            break;
                     }
        }
    else if(check[1]==2){
     case3.remove_book();
     cout<<"the process has been done !"<<endl;
      cout<<"would you like to add more book \n 1-yes \n 2-no";
        cin>>check[2];
        if(check[2]==2){
            break;
    }
    }
}

}
    
Book* read_books(){
    Book books[5] = {Book()};
    return books;
}