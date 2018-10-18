#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Sponsor.hpp"

class Admin: public User {
	private:
		int i;
	public:
			Admin();
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
