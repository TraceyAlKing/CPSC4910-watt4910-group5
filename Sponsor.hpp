#ifndef SPONSOR_H
#define SPONSOR_H
#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "Driver.hpp"

//@TODO: Not yet added to be returned by Database
//	Drivers_
//	numDrivers_

class Sponsor: public User {
private:
    string Drivers_[100];
	int numDrivers_;
	int point_value_;
public:
	Sponsor();
<<<<<<< HEAD
        Sponsor(std::string, std::string, std::string, std::string, std::string, std::string, std::string);
=======
	Sponsor(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string point_value);
>>>>>>> b62edd8f504d889c248aad1ddb91e66ac702a4c1
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
    int getNumDrivers();
	
	Sponsor setSponsor(string f);
	
	void setPV(string i);
	int getPV();
};
#endif
