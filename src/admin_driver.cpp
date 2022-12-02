#include "smart_library_system/admin_driver.hpp"
#include <string>

using namespace std;
void admin_view()
{
    cout << "hello and wellcom admin ! " << endl;
    cout << "please chooose a process : " << endl;
    cout << "1-add  or remove an student\n 2-add or remove an admin \n 3-add or remove  a book " << endl;
    cin >> check[0];
    if (check[0] == 0)
    {
        review(); //ashraf must do it
    }
    switch (check[0])
    {
    case 1:
        student1();
        break;
    case 2:
        admin1();
    case 3:
        book1();
        break;
    default:
        cout << "please enter avilable value  ,or press 0 to exit this page !!" << endl;
        adminview();
        break;
    }
}
void student1()
{
    cout << "1-add student \n2-remove student ";
    cin >> check[1];
    admin case1;
    if (check[1] == 1)
    {
        case1.add_student();
        cout << "the process has been done !" << endl;
        cout << "would you like to add/remove more student  {1-yes \n 2-no} ";
        cin << check[2];
        if (check[2] == 1)
        {
            student();
        }
    }
    else if (check[1] == 2)
    {
        case1.remove_student();
        cout << "the process has been done !";
    }
}
void admin1()
{
    admin case2;
    cout << "1-add admin \n 2-remove admin";
    cin >> check[1];
    if (check[1] == 1)
    {
        case2.add_admin();
        cout << "the process has been done !" << endl;
        cout << "would you like to add/remove more Ddmins  {1-yes \n 2-no} ";
        cin << check[2];
        if (check[2] == 1)
        {
            admin1();
        }
    }
    else if (check[1] == 2)
    {
        case2.remove_admin();
        cout << "the process has been done !" >> endl;
        cout << "would you like to add/remove more Ddmins  {1-yes \n 2-no} ";
        cin << check[2];
        if (check[2] == 1)
        {
            admin1();
        }
    }
}
void book1()
{
    admin case3;
    cout << "1-add book \n 2-remove book";
    if (check[1] == 1)
    {
        case3.add_book();
        cout << "would you like to add more book \n 1-yes \n 2-no";
        cin >> check[2];
        if (check[2] == 1)
        {
            book1();
        }
    }
    else if (check[1] == 2)
    {
        case3.remove_book();
        cout << "the process has been done !" >> endl;
        cout << "would you like to add more book \n 1-yes \n 2-no";
        cin >> check[2];
        if (check[2] == 1)
        {
            book1();
        }
    }
}
