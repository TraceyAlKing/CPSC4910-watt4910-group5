#ifndef ADMIN_HPP
#define ADMIN_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
#include "User.hpp"
#include "Sponsor.hpp"

class Admin: public User {
private:
		int i;
public:
	Admin(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address);
	Admin();
	Admin(const Admin& other);
	Admin& operator=(const Admin& rhs);
	
	~Admin();
	void registerAdmin();
	void saveAdmin();
	void viewUser();
	
	bool checkForUser(string name);
	
	void registerSponsor();
	void registerDriver();
	
	void viewAllDrivers();
	void viewAllSponsors();
	void viewAllAdmins();
	
	void deleteUser();
	
	void listOfFiles();
	
	void listOfUsernames();
	
	void listOfAdminUsernames();
	
	void editUser();
	
	Admin setAdmin(string f);
	
	void editAdmin(Admin name);
	void editSponsor(Sponsor name);
	void editDriver(Driver name);
};
#endif //ADMIN_HPP
