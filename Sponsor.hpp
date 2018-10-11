#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Driver.hpp"

class Sponsor: public User {
		string Drivers[100];
		int numDrivers;
		public:
			Sponsor();
			~Sponsor();
			void saveSponsor();
			void addDriver();
			void removeDriver();
			void changePoints();
			void setSponsorDriver();
			void setDrivers(string* i, int j);
			void registerSponsor();
			bool checkForDriver(string name);
			int getSponNum();
			string* getDrivers();
			Driver setDriver(string f);
	};
