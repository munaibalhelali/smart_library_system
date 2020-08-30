#include <iostream>
#include <string>
#include "login_data.h"

using namespace std;


class Login{
  private:
   char admin='a', student='s', variable1;
  
  public:
  Login( ){}

//   LoginData read_login_data(string a){
//   LoginData user1;
//   user1.name = "ashraf";
//   user1.password = 12345;

//   return user1;
// }
  int login(){
    cout<<"type of your Account a Admin/ s Student ?"<<endl;
    cin>>variable1;

    if(variable1==admin){
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
      cout<<user_data.name<<" "<<user_data.password <<endl;
      if(user_data.get_name==user_name && user_data.get_password==user_password){
              cout<<"Welcome, Admin "<< user_name<<endl;
      }
      return 1;

    }
    else if(variable1==student){
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

    cout<<"Enter your password: ";
    cin>>user_password;
     
      if(user_data.get_name==user_name && user_data.get_password==user_password){
      cout<<"Welcome, Student "<< user_name <<endl;
      return 1;
     }

    }
  }

  // string to_json(LoginData input){
  //   string temp="{";
  //   temp += "name:"+input.name;
  //   temp += "password:"+ to_string(input.password);
  //   temp += "}";
  //   return temp;
  // }
};


//testing the class
int main(){
  Login log;
  
  while(1){
    log.login();
  }
  return 0;
}