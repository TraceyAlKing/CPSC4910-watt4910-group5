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
		int LNum_;

		map<int, int> points_map_;
      vector<int> sponsor_vec_;
		
		int LPNum_[10];
		int LPNumNumber_;

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
		
      int getPoints(int sid);
		int allPoints();
	  
      void getSponsors(std::vector<int>& sponsors);
		
		int getLicenseNum();
		int getNumPlates();
		int* getPlates();
      int getFirstPlate(); //Database only has one plate currently
		//void saveDriver();
		void updateDriver();
		
		Driver setDriver(string f);

		void setLNum(int i);
		
		void updateLNum(int l);
      void addLP(int i);
      void removeLP(int i);
      int* viewLP();
		
		int getLNumNum();
		void setLPNum(string* i, int j);
		
		
		int findSponsor(int i);
      void setPointsFromSponsor(int id, int points);
		void addSponsor(int i);
		void removeSponsor(int id);

      void switchStatus();
      void setStatus(string i);
      string getStatus();
		
};
#endif //DRIVER_HPP
