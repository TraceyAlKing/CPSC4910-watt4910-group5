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
			Admin();
			~Admin();
			void registerAdmin();
			void saveAdmin();
			void viewUser();
			
			bool checkForUser(string name);
};
