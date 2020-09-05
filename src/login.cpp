#include "login.h"

Login::admin = 'a';
Login::student = 's';

Login::Login(){}

int Login::login(){
    cout<<"type of your Account a Admin/ s Student ?"<<endl;
    cin>>choice;

    if(choice==admin){
      cout<<"Welcom admin!"<<endl;
      LoginData user_data;
      string user_name;
      int user_password;
      cout<<"Enter your Name: ";
      cin>>user_name;
      try{
      user_data = read_login_data(user_name);
      } catch(int) {
        cout<<"User name does not exist!"<<endl;
        return 0;
      }
      cout<<"Enter the password: ";
      try{
        cin>>user_password;
      }catch(int e){
        cout<<"Execption:"<<e<<endl;
      }
      cout<<user_data.get_name()<<" "<<user_data.get_password() <<endl;
      if(user_data.get_name()==user_name && user_data.get_password()==user_password){
              cout<<"Welcome, Admin "<< user_name<<endl;
      }
      return 1;

    }
    else if(choice==student){
    logindaten user_data;
    string user_name;
    int user_password;
    cout<<"Enter your Name: ";
    cin>>user_name;
    try{
    user_data = read_login_data(user_name);
    } catch(int) {
    cout<<"User name does not exist!"<<endl;
        return 0;
      }

    cout<<"Enter your password: ";
    cin>>user_password;
     
      if(user_data.name==user_name && user_data.password==user_password){
      cout<<"Welcome, Student "<< user_name <<endl;
      return 1;
     }

    }
  }

  string Login::to_json(Login input){
    string temp="{";
    temp += "name:"+input.get_name();
    temp += "password:"+ to_string(input.get_password());
    temp += "}";
    return temp;
  }