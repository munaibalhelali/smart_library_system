
#include "smart_library_system/login.hpp"

Login::Login() {}

int Login::login()
{

  cout << "type of your Account a Admin/ s Student ?" << endl;
  cin >> choice;

  if (choice == admin)
  {
    cout << "Welcom admin!" << endl;
    string user_name;
    string user_password;
    cout << "Enter your Name: ";
    cin >> user_name;
    try
    {
      current_user = database.read_login_data(user_name);
    }
    catch (int)
    {
      cout << "User name does not exist!" << endl;
      return 0;
    }
    cout << "Enter the password: ";
    try
    {
      cin >> user_password;
    }
    catch (int e)
    {
      cout << "Execption:" << e << endl;
    }
    cout << current_user.get_name() << " " << current_user.get_password() << endl;
    if (current_user.is_correct(LoginData(user_name, user_password)))
    {

      cout << "Welcome, Admin " << user_name << endl;
      return 1;
    }
    else
    {
      cout << "Wrong password!";
      return 0;
    }
  }
  else if (choice == student)
  {

    string user_name;
    string user_password;
    cout << "Enter your Name: ";
    cin >> user_name;
    try
    {
      current_user = database.read_login_data(user_name);
    }
    catch (int)
    {
      cout << "User name does not exist!" << endl;
      return 0;
    }

    cout << "Enter your password: ";
    cin >> user_password;
    cout << current_user.get_name() << "," << current_user.get_password() << endl;
    if (current_user.is_correct(LoginData(user_name, user_password)))
    {
      cout << "Welcome, Student " << user_name << endl;
      return 2;
    }
    else
    {
      cout << "Wrong password!";
      return 0;
    }
  }
}

string Login::to_json(LoginData input)
{
  string temp = "{";
  temp += "name:" + input.get_name();
  temp += "password:" + (string)input.get_password();
  temp += "}";
  return temp;
}
// int main(void){
//   Login loginobjekt;
//   int variabl=loginobjekt.login();
//   return 0;

// }

string Login::get_current_user_id()
{
  if (current_user.is_valid())
  {
    return current_user.get_name();
  }
}