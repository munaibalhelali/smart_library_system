#ifndef LOGIN
#define LOGIN

#include <iostream>
#include <string>
#include "smart_library_system/login_data.hpp"
#include "smart_library_system/database.hpp"
using namespace std;

class Login
{
private:
  char admin = 'a', student = 's', choice;
  Database database;
  LoginData current_user;

public:
  Login();

  int login();
  string get_current_user_id();
  string to_json(LoginData input);
};

#endif