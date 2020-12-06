
#include "admin.h"
using namespace std;


int write_book(Book book);
int write_student(Student student);
int write_admin(Admin admin);
Student get_student(string id);
Admin get_admin(string id);
Book get_book(string id);
int write_login_data(LoginData cred);

Admin::Admin(){}
Admin::Admin(string id, string name, string address, string birthdate){
    set_id(id);
    set_name(name);
    set_address(address);
    set_birthdate(birthdate);
}


void Admin::set_id(string id) 
{
    this->id = id;
}

void Admin::set_name(string name) 
{
    this->name = name;
}

void Admin::set_address(string adrdress) 
{
    this->address= address;
}

void Admin::set_birthdate(string birthdate) 
{
    this->birthdate = birthdate; 
}

string Admin::get_id() 
{
    return id;
}

string Admin::get_name() 
{
    return name;
}


string Admin::get_address() 
{
    return address;
}

string Admin::get_birthdate() 
{
  return birthdate;
}


void Admin::add_student(){
    Student student_temp;
    LoginData credentials;
    string str_temp;
    char confirm;
    cout<<" please enter student name : "<<endl;
    cin>>str_temp;
    student_temp.set_name(str_temp);
    cout<<endl<<"please enter student id: "<<endl;
    cin>>str_temp;
    student_temp.set_ID(str_temp);
    cout<<endl<<"please enter student birthdate :";
    cin>>str_temp;
    student_temp.set_birthdate(str_temp);
    cout<<endl<<"please enter student address :";
    cin>>str_temp;
    student_temp.set_address(str_temp);
    cout<<endl<<"please choose a password: ";
    cin>>str_temp;
    credentials.set_password(str_temp);
    credentials.set_name(student_temp.get_name());
    credentials.set_valid(true);

    cout<<"Do you want to save the student information?[y/n]: ";
    cin>>confirm;
    if (confirm == 'y' || confirm == 'Y'){
        write_student(student_temp);
        write_login_data(credentials);
    }

    return ;
}
void Admin::remove_student(){
    string student_id;
    cout<<"please enter student id : ";
    cin>>student_id;
    get_student(student_id);
}
void Admin::add_admin(){

    Admin admin_temp;
    LoginData credentials;
    string str_temp;
    char confirm;
    cout<<"please enter admin name : "<<endl;
    cin>>str_temp;
    admin_temp.set_name(str_temp);
    cout<<endl<<"please enter admin id: "<<endl;
    cin>>str_temp;
    admin_temp.set_id(str_temp);
    cout<<endl<<"please enter admin birthdate :";
    cin>>str_temp;
    admin_temp.set_birthdate(str_temp);
    cout<<endl<<"please enter admin address :";
    cin>>str_temp;
    admin_temp.set_address(str_temp);
    cout<<endl<<"please choose a password: ";
    cin>>str_temp;
    credentials.set_password(str_temp);
    credentials.set_name(admin_temp.get_id());
    credentials.set_valid(true);
    cout<<"Do you want to save the admin information?[y/n]: ";
    cin>>confirm;
    if (confirm == 'y' || confirm == 'Y'){
        write_admin(admin_temp);
        write_login_data(credentials);
    }

    return ;
}
void Admin::remove_admin(){
    string admin_id;
    cout<<"please enter admin id : ";
    cin>>admin_id;
    get_admin(admin_id);
}
void Admin::add_book(){
    Book book_temp;
    string str_temp;
    char confirm;
    cout<<"please enter book name : "<<endl;
    cin>>str_temp;
    book_temp.set_name(str_temp);
    cout<<endl<<"please enter book id: "<<endl;
    cin>>str_temp;
    book_temp.set_id(str_temp);
    cout<<endl<<"please enter book auther :";
    cin>>str_temp;
    book_temp.set_author(str_temp);
    cout<<"Do you want to save the student information?[y/n]: ";
    cin>>confirm;
    if (confirm == 'y' || confirm == 'Y'){
        write_book(book_temp);
    }

    return ;
}
void Admin::remove_book(){
    string book_id;
    cout<<"please enter book id : ";
    cin>>book_id;
    get_book(book_id);
}

int write_book(Book book){
    string path = "../data/books/";
    path +=book.get_id()+".json";

    jsoncons::json json_book;

    json_book.insert_or_assign("name", book.get_name()); 
    json_book.insert_or_assign("id", book.get_id());
    json_book.insert_or_assign("author", book.get_author());

    cout<<json_book<<endl;
    ofstream output_file(path,ios::out);
    output_file<<json_book;
    output_file.close();
    
    }

int write_student(Student student){
    string path = "../data/students/";
    path +=student.get_ID()+".json";

    jsoncons::json json_student;

    json_student.insert_or_assign("name", student.get_name()); 
    json_student.insert_or_assign("id", student.get_ID());
    json_student.insert_or_assign("address", student.get_address() );
    json_student.insert_or_assign("birthdate", student.get_birthdate());
    for(int i =0 ; i<3; i++){
        Book book = student.current_list[i];
        jsoncons::json json_book;

        json_book.insert_or_assign("name", book.get_name()); 
        json_book.insert_or_assign("id", book.get_id());
        json_book.insert_or_assign("author", book.get_author());

        json_student.insert_or_assign("book_list", json_book);
    }
    
    
    cout<<json_student<<endl;
    ofstream output_file(path,ios::out);
    output_file<<json_student;
    output_file.close();
}

int write_admin(Admin admin){
    string path = "../data/admins/";
    path +=admin.get_id()+".json";

    jsoncons::json json_admin;

    json_admin.insert_or_assign("name", admin.get_name()); 
    json_admin.insert_or_assign("id", admin.get_id());
    json_admin.insert_or_assign("address", admin.get_address());
    json_admin.insert_or_assign("birthdate", admin.get_birthdate());

    cout<<json_admin<<endl;
    ofstream output_file(path,ios::out);
    output_file<<json_admin;
    output_file.close();
    
    }

Student get_student(string id){
    string path = "../data/students/";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json std = jsoncons::json::parse(is);
        
        Student student(std["id"].as<std::string>(), std["name"].as<std::string>(), 
                        std["address"].as<std::string>(), std["birthdate"].as<std::string>());
        return student;
    }catch(int e){
        return Student();
    }

}

Admin get_admin(string id){
    string path = "../data/admins/";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json admn = jsoncons::json::parse(is);
        Admin admin(admn["id"].as<std::string>(), admn["name"].as<std::string>(), 
                        admn["address"].as<std::string>(), admn["birthdate"].as<std::string>());
        return admin;
    }catch(int e){
        return Admin();
    }
}

Book get_book(string id){
    string path = "../data/books/";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json bk = jsoncons::json::parse(is);
        Book book(bk["name"].as<std::string>(), bk["id"].as<std::string>()
        , bk["author"].as<std::string>());
        return book;
    }catch(int e){
        return Book();
    }
}

int write_login_data(LoginData cred){
    string path = "../data/login_info/";
    path +=cred.get_name()+".json";

    jsoncons::json json_login;

    json_login.insert_or_assign("name", cred.get_name()); 
    json_login.insert_or_assign("password", cred.get_password());


    cout<<json_login<<endl;
    ofstream output_file(path,ios::out);
    output_file<<json_login;
    output_file.close();
    
    }