#include<iostream>
#include<string>
using namespace std;

//write_login_data(json);
struct read_login_data();
/*{"name":"Ashraf", "id":1234, "type":"student"}
data["name"]*/
 typedef struct {
  string name;
  int password;
}logindaten;

class Login{
  private:
   char admin='a', student='s', variable1;
  
  public:

  int login(){
    cout<<"type of your Account a Admin/ s Student ?"<<endl;
    cin>>variable1;

    if(variable1==admin){
      logindaten user_data;
      string user_name;
      int user_password;
      cout<<"Enter your Name: " <<endl;
      cin>>user_name;
      try{
      user_data = read_login_data(user_name)
      } catch(int) {
        cout<<"User name does not exist!"<<endl;
        return 0;
      }
      cin>>user_password;
      try{
      user_data = read_login_data(user_password)
      } catch(int) {
        cout<<"User password is false!"<<endl;
        return 0;
      }
      if(user_data.name==user_name && user_data.password==user_password){
              cout<<"Welcome, Admin "<< user_name;
      }

    }
    if(variable1==student){
    logindaten user_data;
    string user_name;
    int user_password;
    cout<<"Enter your Name: "<<endl;
    cin>>user_name;
    try{
    user_data = read_login_data(user_name)
    } catch(int) {
    cout<<"User name does not exist!"<<endl;
        return 0;
      }

    cout<<"Enter your password: "<<endl;
    cin>>user_password;
      try{
      user_data = read_login_data(user_password)
      } catch(int) {
        cout<<"User password is false!"<<endl;
        return 0;
      }
      if(user_data.name==user_name && user_data.password==user_password){
      cout<<"Welcome, Student "<< user_name;
     }

    }
  }

  void to_json(){
    //
  }
};
int main() {
return 0;
}