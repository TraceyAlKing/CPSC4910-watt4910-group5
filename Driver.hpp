#include <string.h>
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

#include "User.hpp"

class Driver: public User {
		string sponsor;
		int points;
	public:
		Driver();
		~Driver(); 
		void registerDriver();
		int getPoints();
		string getSponsor();
		void saveDriver();
		int changePoints();

		void setSponsor(string i);
		void setPoints(string i);
};
