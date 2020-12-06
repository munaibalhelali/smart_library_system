#include <iostream>
#include <string>
#include <stdio.h>

#include "login_data.h"
#include <jsoncons/json.hpp>
#include <dirent.h>
#include <sys/types.h>
#include <fstream>
using namespace std;
string path = "../data/login_info/munaib.json";
// LoginData login;
// Admin admin;


int main(){
// try{
    ifstream is(path);
    jsoncons::json lgn_info = jsoncons::json::parse(is);
    string name = lgn_info["name"].as<std::string>();
    string password = lgn_info["password"].as<std::string>();
    cout<< "name: "<<name<<",password:"<<password<<endl;
    LoginData login;
    login.set_name(name);
// }catch(int e){
//     cout<<"User ID does not exist!"<<endl;
//     LoginData user_data;
//     user_data.set_valid(false);
//     return user_data;
// }
return 0;
}