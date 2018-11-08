#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.hpp"

class Driver: public User {
		string sponsor_[20];
		int sponsorNum_;
		
		int LNum_;
		
		int points_[10];
		int pointNum_;
		
		int LPNum_[10];
		int LPNumNumber_;
        int currSponsor_;

                string status_;
	public:
		Driver(std::string id, std::string name, std::string email, std::string password,
                        std::string phone, std::string address, std::string points, std::string status);
		Driver(const Driver& other);
      Driver& operator=(const Driver& rhs);
		Driver();
		~Driver(); 
		
		void registerDriver();
		
		int* getPoints();
		int getPointNum();
		
		string* getSponsor();
		int getSponsorNum();
		
		int getLicenseNum();
		int getNumPlates();
		int* getPlates();
		void saveDriver();
		void updateDriver();
		int changePoints();
		
		Driver setDriver(string f);

		void setLNum(int i);
		
		void updateLNum();
		void addLP();
		void removeLP();
		void viewLP();
		
		int getLNumNum();
		void setLPNum(string* i, int j);
		
		void setSponsors(string *i, int j);
		void setPoints2(string *i, int j);
		
		int findSponsor(string i);
		void setPointsFromSponsor(string i);
		void addSponsor(string i);
		void removeSponsor(string i);

                void switchStatus();
                void setStatus(string i);
                string getStatus();
		
};
#endif //DRIVER_HPP
