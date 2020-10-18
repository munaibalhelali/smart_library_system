#include "database.h"

void list_dir(const char *path) {
   struct dirent *entry;
   DIR *dir = opendir(path);
   
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) {
   cout << entry->d_name << endl;
   }
   closedir(dir);
}

//defintion of the Database class funcitons

Database::Database(){}

//write to files one item a time
int Database::write_student(Student student){
    string path = "../data/students";
    path +=student.get_ID()+".json";

    jsoncons::json json_student;

    json_student.insert_or_assign("name", student.get_name()); 
    json_student.insert_or_assign("id", student.get_ID());
    json_student.insert_or_assign("address", student.get_address() );
    json_student.insert_or_assign("birthdate", student.get_birth_date());
    json_student.insert_or_assign("book_list", student.get_book_list());
    
    cout<<json_student<<endl;
    ofstream output_file(path,ios::out);
    output_file<<json_student;
    output_file.close();
}
int Database::write_book(Book book){
    string path = "../data/books";
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
int Database::write_admin(Admin admin){
    string path = "../data/admins";
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
int Database::write_shelf(Shelf shelf){
    string path = "../data/shelves";
    path +=shelf.get_id()+".json";

    jsoncons::json json_shelf;

    json_shelf.insert_or_assign("name", shelf.get_name()); 
    json_shelf.insert_or_assign("id", shelf.get_id());
    json_shelf.insert_or_assign("location", shelf.get_location());

    cout<<json_shelf<<endl;
    ofstream output_file(path,ios::out);
    output_file<<json_shelf;
    output_file.close();
    
    }

//getters
Student Database::get_student(string id){
    string path = "../data/students";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json std = jsoncons::json::parse(is);
        Student student(std["id"], std["name"], 
                        std["address"], std["birthdate"]);
        return student;
    }catch{
        return Student student();
    }
    
}
auto Database::get_book(string id){
    string path = "../data/books";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json bk = jsoncons::json::parse(is);
        Book book(bk["name"], bk["id"], bk["author"]);
        return book;
    }catch{
        return false;
    }
}
auto Database::get_admin(string id){
    string path = "../data/admins";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json admn = jsoncons::json::parse(is);
        Admin admin(admn["id"], admn["name"], 
                        admn["address"], admn["birthdate"]);
        return admin;
    }catch{
        return false;
    }
}
auto Database::get_shelf(string id){
    string path = "../data/shelves";
    path += id+".json";
    
    try{
        ifstream is(path);
        jsoncons::json shlf = jsoncons::json::parse(is);
        Shelf shelf(shlf["id"], shlf["name"], 
                        shlf["location"]);
        return shelf;
    }catch{
        return false;
    }
}

LoginData Database::read_login_data(string id){

    string path = "../data/login_info";
    path += id+".json";

    try{
        ifstream is(path);
        jsoncons::json lgn_info = jsoncons::json::parse(is);
        LoginData user_data(lgn_info["name"], lgn_info["password"]);
        return user_data;
    }catch{
        cout<<"User ID does not exist!"<<endl;
        LoginData user_data;
        user_data.is_valid(false);
        return user_data;
    }
        
}
int Database::delete_student(string id) 
{
    string path = "data/students/"+id+"json";
    if (remove(path.c_str( )) !=0)
           cout<<"Remove operation failed"<<endl;
     else
           cout<<path<<" has been removed."<<endl;
}

int Database::delete_book(string id) 
{
    string path = "data/books/"+id+"json";
    if (remove(path.c_str( )) !=0)
           cout<<"Remove operation failed"<<endl;
     else
           cout<<path<<" has been removed."<<endl;
}

int Database::delete_admin(string id) 
{
    string path = "data/admins/"+id+"json";
    if (remove(path.c_str( )) !=0)
           cout<<"Remove operation failed"<<endl;
     else
           cout<<path<<" has been removed."<<endl;
}

int Database::delete_shelf(string id) 
{
    string path = "data/shelves/"+id+"json";
    if (remove(path.c_str( )) !=0)
           cout<<"Remove operation failed"<<endl;
     else
           cout<<path<<" has been removed."<<endl;
}

int main()
{
    Database database;

    database.delete_student(11111);
    return 0;
}
