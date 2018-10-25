#ifndef USER_HPP
#define USER_HPP

#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

//@TODO: Not in schema: 
//	username
//	addNum

class User {
		string name_, username_, password_, email_;
		string address_[10];
		int addNum_;
		long phone_;
		int id_;
	public:
		User();
		User(std::string id, std::string name, std::string email, std::string password,
			std::string phone, std::string address);
		User(const User& other);
		User& operator=(const User& rhs);
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
        void updateAddress();
		void removeAddress();
		int getNumAddress();
		
		void changePassword();
};

#endif //USER_HPP
