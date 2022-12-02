#include <iostream>
#include "smart_library_system/admin_driver.hpp"
#include "smart_library_system/student_view.hpp"
using namespace std;
int main(void)
{
    int user_input;
    cout << "Welcome to Smart Library System (SLS)!" << endl;
    while (true)
    {

        cout << "Choose user type:\n[1] Admin\n[2] Student\n[3] Quit program" << endl;
        cout << "Your input: ";
        cin >> user_input;

        if (user_input == 1)
        {
            AdminDriver().admin_view();
        }
        else if (user_input == 2)
        {
            student_view();
        }
        else if (user_input == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid input!"
        }
    }

    return 0;
}
