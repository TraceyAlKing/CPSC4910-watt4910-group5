#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

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

		void setSponsor(string i);
		void setPoints(string i);
		
		void updateLNum();
		void addLPNum();
		void removeLPNum();
		
		int getLNumNum();
<<<<<<< HEAD
		void setLPNum(string* i, int j);
		
=======
>>>>>>> iteration5
};
