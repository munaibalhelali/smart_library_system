#include "student_view.h"

using namespace std;



void student_view(){
    // promote user for choice
    int choice;
    while(true){
        cout<< "Please choose one of the following options:\
                    \n[1] Borrow a book\
                    \n[2] Return a book\
                    \n[3] Show borrowed book list\
                    \n[4] Quit"<<endl<<"Your choice[1/2/3/4]: ";

        cin>>choice;
        switch(choice){
            case 1:
                borrow_book();
                break;
            case 2:
                return_book();
                break;
            case 3:
                view_current_list();
                break;
            case 4:
                return;
            default:
                cout<<"Input is not valid. Try again!"<<endl;
        }
        
    }
}



void return_book(){
    int size = sizeof(curr_student.current_list);
    int choice;
    char confirm;
    string id;
    Book book;
    cout<<"Your list of borrowed books:"<<endl;
    for(int i=0; i<size ; i++){
        
        id = curr_student.current_list[i].get_id();
        if (id != ""){
            book = Database().get_book(id );
            cout<<"["<<i+1<<"]"<<book.get_name()<<endl;
        }
    }
    cout<<"Choose a book to return: ";
    cin>> choice;
    id = curr_student.current_list[choice-1].get_id();
    book = Database().get_book(id );
    cout << "You choosed the following book:\n"<<book.get_name()<<endl;
    cout<<"Confirm [y/n]: ";
    cin>>confirm;
    if (confirm =='y'|| confirm=='Y'){
        curr_student.current_list[choice-1].get_id() = "";
        book.make_available(true);
        Database().write_book(book);
        Database().write_student((Student)curr_student);

        cout<<"Success!"<<endl;
    }

}

void borrow_book(){
    Book* book_list = Database().read_books();
    int size = sizeof(*book_list);
    int choice;
    char confirm;

    cout<<"List of available books:"<<endl;
    for(int i=0; i<size ; i++){
        
        Book book = book_list[i];
        cout<<"["<<i+1<<"]"<<book.get_name()<<endl;
    
    }
    cout<<"Choose a book to return: ";
    cin>> choice;

    cout << "You choosed the following book:\n"<<book_list[choice-1].get_name()<<endl;
    cout<<"Confirm [y/n]: ";
    cin>>confirm;
    if (confirm =='y'|| confirm=='Y'){
        curr_student.current_list[choice-1].get_id() = book_list[choice-1].get_id();
        book_list[choice-1].make_available(false);
        Database().write_book(book_list[choice-1]);
        Database().write_student((Student)curr_student);
        cout<<"Success!"<<endl;
    }

}
void view_current_list(){
for(int i=0; i<3; i++){
    cout<<curr_student.current_list[i].get_name();
}
}