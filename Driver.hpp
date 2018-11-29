#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>
#include <vector>

using namespace std;

#include "User.hpp"

class Driver: public User {
		string sponsor_[20];
		int sponsorNum_;
		
		int LNum_;
		
		int points_[10];
		map<int, int> points_map_;
      vector<int> sponsor_vec_;

		int pointNum_;
		
		int LPNum_[10];
		int LPNumNumber_;
      int currSponsor_;

      string status_;
	public:
		Driver(std::string id, std::string name, std::string email, std::string password,
                        std::string phone, std::string address, std::string status,
                        std::string license_num, std::string license_plate_num);
		Driver(const Driver& other);
      Driver& operator=(const Driver& rhs);
		Driver();
		~Driver(); 
		
      void registerDriver(string us, string ps, string nm, string em, long ph, string ad, int ln, string lp);
		
		int* getPoints();
		int getPoints(int sid);
		int allPoints();
		int getPointNum();
		
		string* getSponsor();
		int getSponsorNum();
		
		int getLicenseNum();
		int getNumPlates();
		int* getPlates();
      int getFirstPlate(); //Database only has one plate currently
		void saveDriver();
		void updateDriver();
		
		Driver setDriver(string f);

		void setLNum(int i);
		
		void updateLNum(int l);
      void addLP(int i);
      void removeLP(int i);
      int* viewLP();
		
		int getLNumNum();
		void setLPNum(string* i, int j);
		
		void setSponsors(string *i, int j);
		void setPoints2(string *i, int j);
		
		int findSponsor(string i);
                void setPointsFromSponsor(string i, int k);
		void addSponsor(string i);
		void removeSponsor(string i);

      void switchStatus();
      void setStatus(string i);
      string getStatus();
		
};
#endif //DRIVER_HPP
