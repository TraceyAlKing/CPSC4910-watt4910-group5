#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

class User {
		string username, password, email;
		long phone;
		int ID;
	public:
		User();
		~User(); 
		void registerUser();
		string getUsername();
		string getPassword();
		string getEmail();
		long getPhone();
		int getID();

		void setUsername(string i);
		void setPassword(string i);
		void setEmail(string i);
		void setPhone(string i);
		void setID(string i);
};
