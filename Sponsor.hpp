#ifndef SPONSOR_HPP
#define SPONSOR_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "Driver.hpp"

using namespace std;

class Sponsor: public User {
private:
    string Drivers_[100];
	int numDrivers_;
	int point_value_;
public:
    Sponsor();
    Sponsor(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string point_value);
	Sponsor(const Sponsor& other);
    Sponsor& operator=(const Sponsor& rhs);
	~Sponsor();
	void saveSponsor();
	void updateSponsor();
    void addDriver(string input);
        void removeDriver(int input);
	void removeDriverWInput(string i);
        void changePoints(int input, int i);
	void setSponsorDriver();
	void setDrivers(string* i, int j);
        void registerSponsor(string us, string ps, string nm, string em, long ph, string ad, int pv);
	bool checkForDriver(string name);
	int getSponNum();
    string* getDrivers();
    int getNumDrivers();
	
	Sponsor setSponsor(string f);
	
	void setPV(string i);
	int getPV();
};
#endif //SPONSOR_HPP
