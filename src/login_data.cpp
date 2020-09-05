
#include "login_data.h"

LoginData::LoginData() 
{

}

LoginData::LoginData(string in_name, string in_password) 
{
    name = in_name;
    password = in_password;   
    valid = true; 
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
    if( name.compare(in_data.get_name())
        && password.compare(in_data.get_password())){
            return true;
    }else{
        return false;
    }
}

