#ifndef DRIVER_HPP
#define DRIVER_HPP

#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;

#include "User.hpp"

class Driver: public User {
		string sponsor_;
		int LNum_;
		int LPNum_[10];
		int points_;
		int LPNumNumber_;
	public:
        Driver();
        Driver(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string points);
		Driver(const Driver& other);
        Driver& operator=(const Driver& rhs);
		~Driver(); 
		void registerDriver();
		int getPoints();
		string getSponsor();
		int getLicenseNum();
		int getNumPlates();
		int* getPlates();
		void saveDriver();
		int changePoints();
                int* viewLPNum();
		
		Driver setDriver(string f);

		void setSponsor(string i);
		void setPoints(string i);
		void setLicenseNum(string i);
		
		void updateLNum();
		void addLPNum();
		void removeLPNum();
		
        int getLNumNum();
                void setLNum(int i);
        void setLPNum(string i, int j);
};
#endif //DRIVER_HPP
