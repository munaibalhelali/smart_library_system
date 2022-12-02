
#include "smart_library_system/login_data.hpp"
using namespace std;
LoginData::LoginData()
{
    valid = false;
}

LoginData::LoginData(string in_name, string in_password)
{
    set_name(in_name);
    set_password(in_password);
    valid = true;
}
void LoginData::set_valid(bool val)
{
    valid = val;
}
void LoginData::set_name(string in_name)
{
    name = in_name;
}
void LoginData::set_password(string in_password)
{
    password = in_password;
}
string LoginData::get_name()
{
    return name;
}

string LoginData::get_password()
{
    return password;
}

bool LoginData::is_correct(LoginData in_data)
{
    ;
    if (name.compare(in_data.get_name()) == 0)
    {
        if (password.compare(in_data.get_password()) == 0)
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}

bool LoginData::is_valid()
{
    return valid;
}
