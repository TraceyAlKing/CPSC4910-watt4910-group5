#include <string.h>
#include <iostream>
#include <cstdlib>

#include "Driver.hpp"

Driver::Driver()
{
	sponsor = "";
	points = 0;
}

Driver::~Driver()
{
}

void Driver::registerDriver()
{
	registerUser();

	cout << "Sponsor set to N/A" << endl;
	sponsor = "N/A";

	cout << "Points set to 0" << endl;
	points = 0;
}

int Driver::getPoints()
{
	return points;
}

string Driver::getSponsor()
{
	return sponsor;
}

void Driver::saveDriver()
{
	ofstream myfile;
	const char* file = getUsername().c_str();
	myfile.open(file);

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << getID() << "\n";	
	myfile << getSponsor() << "\n";
	myfile << getPoints() << "\n";
}

int Driver::changePoints()
{
	cout << "How many points should be added/removed?" << endl;
	int i;
	cin >> i;
	int tPoints = points;
	points = points + i;
	while(points < 0)
	{
		cout << "Total points cannot be below 0" << endl;
		points = tPoints;
		cin >> i;

		tPoints = points;
		points = points + i;
	}
	cout << "Total Points: " << points << endl;
	return points;
}

void Driver::setSponsor(string i)
{
	sponsor = i;
}

void Driver::setPoints(string i)
{
	points = atoi(i.c_str());
}
