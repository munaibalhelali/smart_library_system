#include <iostream>
#include "admin_driver.h"
#include "student_view.cpp"
using namespace std;
int main(void ){
    int user_input;
    cout<<"Welcome to Smart Library System (SLS)!"<<endl;
    while(true){
        
        cout<<"Choose user type:\n[1] Admin\n[2] Student\n[3] Quit program"<<endl;
        cout<<"Your input: ";
        cin>>user_input;

        if(user_input == 1){
            AdminDriver().admin_view();
        }else if(user_input == 2){
            student_view();
        }else if (user_input == 3){
            break;
        }else{
            cout<<"Invalid input!"
        }
    }
    


    return 0;
}
