#ifndef LOGIN_DATA
#define LOGIN_DATA

#include <string>
#include <iostream>
using namespace std;

class LoginData
{
private:
    string name;
    string password;
    bool valid;

public:
    LoginData();
    LoginData(string in_name, string password);
    void set_valid(bool val);
    void set_name(string in_name);
    void set_password(string in_password);
    string get_name();
    string get_password();
    bool is_valid();
    bool is_correct(LoginData in_data);
};

#endif