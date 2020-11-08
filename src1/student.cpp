#include "student.h"
// Book get_book(string id);
using namespace std;

  	Student::Student() {
      
      valid = false;
	  }  
  	Student::Student(string id, string nm, string adrs, string BD)  
        {
           ID=id;
           name=nm;
           address=adrs;
           birthdate=BD;
        }
    void Student::set_ID(string id) {
      ID=id;
    }
    void Student::set_name(string nm) {
      name=nm;
    }
     void Student::set_address(string adrs) {
      address=adrs;
    }
    
     void Student::set_birthdate(string BD) {
      birthdate=BD;
    }
    
    string Student::get_ID() {
      return ID;
    }
    string Student::get_name() {
      return name;
    }
     string Student::get_address() {
      return address;
    }
     string Student::get_birthdate() {
      return birthdate;
    }
    void Student::borrow_book(string book_id){
      for(int i=0; i<3; i++){
        if(current_list[i].valid == false){
          current_list[i] = get_book(book_id);
          return;
        }
        cout<<"You already have three books in your list"<<endl;
      }

}

// Book get_book(string id){
//     string path = "../data/books";
//     path += id+".json";

//     try{
//         ifstream is(path);
//         jsoncons::json bk = jsoncons::json::parse(is);
//         string name = bk["name"].as<std::string>();
//         string id_b = bk["id"].as<std::string>();
//         string author = bk["author"].as<std::string>();
//         Book book(name, id_b, author);
//         return book;
//     }catch(int e){
//         return Book();
//     }
// }