#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.hpp"

class Driver: public User {
		string sponsor;
		int LNum;
		int LPNum[10];
		int points;
		int LPNumNumber;
	public:
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

		void setSponsor(string i);
		void setPoints(string i);
		
		void updateLNum();
		void addLPNum();
		void removeLPNum();
		
		int getLNumNum();
};
