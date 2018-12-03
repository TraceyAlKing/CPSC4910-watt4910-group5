#ifndef ADMIN_HPP
#define ADMIN_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;
#include "User.hpp"
#include "Sponsor.hpp"
class Database;

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
	void updateAdmin();
        //void viewUser();
	
	bool checkForUser(string name);
	
	void registerSponsor();
	void registerDriver();
	
	void viewAllDrivers();
	void viewAllSponsors();
	void viewAllAdmins();
	
        void deleteUser(string name);
	
	void listOfFiles();
	
	void listOfUsernames();
	
	void listOfAdminUsernames();
	
	void editUser();
	
	Admin setAdmin(string f);
	
        //void editAdmin(Admin name);
        //void editSponsor(Sponsor name);
        //void editDriver(Driver name);

        string viewUsernameDriver(Driver d);
        void setUsernameDriver(Driver d, string p);

        string viewUsernameSponsor(Sponsor d);
        void setUsernameSponsor(Sponsor d, string p);

        string viewUsernameAdmin(Sponsor d);
        void setUsernameAdmin(Sponsor d, string p);

        string viewPasswordDriver(Driver d);
        void setPasswordDriver(Driver d, string p);

        string viewPasswordSponsor(Sponsor d);
        void setPasswordSponsor(Sponsor d, string p);

        string viewPasswordAdmin(Sponsor d);
        void setPasswordAdmin(Sponsor d, string p);

        string viewStatus(Driver d);
        void changeStatus(Driver d);

};
#endif //ADMIN_HPP
