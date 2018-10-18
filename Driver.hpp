#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.hpp"

//@TODO: Not yet returned by Database:
//	sponsor_
//@TODO: Not in schema:
//	LNum_
//	LPNum_
//	LPNumNumber_?

class Driver: public User {
		string sponsor_;
		int LNum_;
		int LPNum_[10];
		int points_;
		int LPNumNumber_;
	public:
		Driver(std::string id, std::string name, std::string email, std::string password,
			std::string phone, std::string address, std::string points);
		Driver();
		~Driver(); 
		void registerDriver();
		int getPoints();
		
		string getSponsor();
		int getLicenseNum();
		int getNumPlates();
		int* getPlates();
		void saveDriver();
		int changePoints();

		void setLNum(int i);
		void setSponsor(string i);
		void setPoints(string i);
		
		void updateLNum();
		void addLP();
		void removeLP();
		void viewLP();
		
		int getLNumNum();
		void setLPNum(string* i, int j);
};
