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
		
		Driver setDriver(string f);

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
