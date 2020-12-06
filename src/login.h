#ifndef LOGIN
#define LOGIN

#include <iostream>
#include <string>
#include "login_data.h"
#include "database.h"
using namespace std;

class Login{
  private:
    char admin='a', student='s', choice;
    Database database;
    LoginData current_user;
  public:
  Login( );

  int login();
  string get_current_user_id();
  string to_json(LoginData input);
};

#endif