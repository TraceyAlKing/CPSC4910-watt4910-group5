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
   std::vector<int> Drivers_;
   int point_value_;
   std::vector<int> Catalog_;
public:
   Sponsor();
   Sponsor(std::string id, std::string name, std::string email, std::string password,
	  std::string phone, std::string address, std::string point_value);
	Sponsor(const Sponsor& other);
   Sponsor& operator=(const Sponsor& rhs);
	~Sponsor();
	//void saveSponsor();
	void updateSponsor();
   void addDriver(int id);
   void removeDriver(int id);
	//void removeDriverWInput(string i);
   // void changePoints(int id, int new_point_value);
	void setSponsorDriver();
	void setDrivers(string* i, int j);
   void registerSponsor(string us, string ps, string nm, string em, long ph, string ad, int pv);
	bool checkForDriver(string name);
	int getSponNum();
   void getDrivers(std::vector<int>& drivers);
   std::vector<int>& getDrivers();
   int getNumDrivers();
   
   void getCatalogs(std::vector<int> &catalogs);
   std::vector<int>& getCatalogs();
   int getNumCatalogs();
   int getCatalog();
	
	//Sponsor setSponsor(string f);
	
	void setPV(int i);
   void setPV(std::string s);
	int getPV();
};
#endif //SPONSOR_HPP
