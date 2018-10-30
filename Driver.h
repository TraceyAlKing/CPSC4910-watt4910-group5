#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.h"

class Driver: public User {
		string sponsor[20];
		int sponsorNum;
		
		int LNum;
		
		int points[10];
		int pointNum;
		
		int LPNum[10];
		int LPNumNumber;
	public:
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
		
};
