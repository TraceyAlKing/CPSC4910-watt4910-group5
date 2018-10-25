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
        Sponsor(std::string, std::string, std::string, std::string, std::string, std::string, std::string);
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
