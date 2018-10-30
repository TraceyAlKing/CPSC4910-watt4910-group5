#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

class User {
		string name, username, password, email;
		string address[10];
		int addNum;
		long phone;
		int ID;
	public:
		User();
		~User(); 
		void registerUser();
		string getName();
		string getUsername();
		string getPassword();
		string getEmail();
		string* getAddress();
		
		long getPhone();
		int getID();

		void setUsername(string i);
		void setPassword(string i);
		void setName(string i);
		void setEmail(string i);
		void setPhone(string i);
		void setID(string i);
		void setAddress(string* i, int j);
		
		void addAddress();
		void removeAddress();
		int getNumAddress();

		void updateAddress();
		
		void changePassword();
};
