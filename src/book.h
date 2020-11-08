#ifndef BOOK
#define BOOK

#include<iostream>
#include<string>

//namespace B{
	class Book {

		private :
			std::string  name;
			std::string author; 
			std::string id;
			bool available = true;
			
		public:
			bool valid=true;
			Book();
			Book(std::string in_name, std::string in_id, std::string in_author);
			void set_name(std::string n);
			
			void set_author(std::string a);
			
			void set_id(std::string i);
			
			std::string get_name();
			
			std::string get_author();
			
			std::string get_id();

			void make_available(bool status);


		};
//}


#endif