#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.hpp"

class Admin: public User {
private:
	int i;
public:
	Admin(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address);
	~Admin();
	void registerAdmin();
	void saveAdmin();
	void viewUser();
	
	bool checkForUser(string name);
};
