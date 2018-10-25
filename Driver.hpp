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
<<<<<<< HEAD
                Driver(std::string, std::string, std::string, std::string, std::string, std::string, std::string);
=======
		Driver(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string points);
>>>>>>> b62edd8f504d889c248aad1ddb91e66ac702a4c1
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
<<<<<<< HEAD
//<<<<<<< HEAD
                void setLPNum(string* i, int j);
                void setLNum(int i);
		
//=======
//>>>>>>> iteration5
=======
		void setLPNum(string i, int j);
>>>>>>> b62edd8f504d889c248aad1ddb91e66ac702a4c1
};
#endif //DRIVER_HPP
