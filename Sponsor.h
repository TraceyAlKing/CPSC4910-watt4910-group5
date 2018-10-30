#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Driver.h"

class Sponsor: public User {
		string Drivers[100];
		int numDrivers;
		int pointValue;
		public:
			Sponsor();
			~Sponsor();
			void saveSponsor();
			void addDriver();
			void removeDriver();
			void removeDriverWInput(string i);
			void changePoints();
			void setSponsorDriver();
			void setDrivers(string* i, int j);
			void registerSponsor();
			bool checkForDriver(string name);
			int getSponNum();
			string* getDrivers();
			
			Sponsor setSponsor(string f);
			
			void setPV(string i);
			int getPV();
	};