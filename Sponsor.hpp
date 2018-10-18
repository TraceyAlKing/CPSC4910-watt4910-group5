#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.hpp"

//@TODO: Not yet added to be returned by Database
//	Drivers_
//	numDrivers_

class Sponsor: public User {
private:
	string Drivers_[100];
	int numDrivers_;
	int point_value_;
public:
	Sponsor(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string point_value);
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
};
