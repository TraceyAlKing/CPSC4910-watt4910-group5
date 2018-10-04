#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#include "Sponsor.hpp"
#include "Driver.hpp"

Sponsor::Sponsor()
{
	numDrivers = 0;
}

Sponsor::~Sponsor()
{
}

void Sponsor::setDrivers(string* i, int j)
{
	numDrivers = j;
	for(int k = 0; k < j; k++)
	{
		Drivers[k]  = i[k];
		cout << "For loop: " << Drivers[k] << endl;
	}
}


void Sponsor::registerSponsor()
{
	registerUser();
	
	cout << "Add drivers later." << endl;
	
		numDrivers = 0;
}

void Sponsor::saveSponsor()
{
	ofstream myfile;
	const char* file = getUsername().c_str();
	myfile.open(file);
	
	myfile << "Sponsor" << "\n";

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getName() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << getID() << "\n";	
	myfile << "ADDRESS" << "\n";
	
	int n = getNumAddress();
	string* addresses = getAddress();
	for(int p = 0; p < n; p++)
	{
		myfile << addresses[p] << "\n";
	}
	
		myfile << "ENDADDRESS" << "\n";
		
		myfile << "SPONS2" << "\n";
		n = getSponNum();
		string* sponss = getDrivers();
		cout << "Driver 0: " << sponss[0] << endl;
		for(int p = 0; p < n-1; p++)
		{
			myfile << sponss[p] << "\n";
		}
		myfile << "ENDSPONS" << "\n";
	/*instead of lisence plate number, show drivers*/
}

void Sponsor::addDriver()
{
	string input;
	cout << "What is the username of the driver you want to add?" << endl;
	cin >> input;
	bool tf = checkForDriver(input);
	/*check to see if sponsor is N/A*/
	/*add to list of drivers*/
	/*change N/A to the sponsor name*/
	numDrivers++;	
}

void Sponsor::removeDriver()
{
	/*show list of Drivers*/
	/*ask which number to remove*/
}

int Sponsor::getSponNum()
{
	return numDrivers;
}

bool Sponsor::checkForDriver (string name) {
	string str;
	ifstream in(name);
	
    if (FILE *file = fopen(name.c_str(), "r")) 
	{
		getline(in, str);
		if(str == "Driver")
		{
			while(getline(in, str))
			{
				if(str == "N/A")
				{
					        	fclose(file);
							cout << "Driver found and unassigned." << endl;
							cout << numDrivers << endl;
							Drivers[numDrivers] = name;
							numDrivers++;
        						return true;
				}
			}
			fclose(file);
			cout << "Driver already has sponsor." << endl;
			return false;
		}
		else
		{
			fclose(file);
			cout << "User not a Driver." << endl;
			return false;
		}
    } 
	else 
	{
		cout << "User not found." << endl;
        return false;
    }   
}

string* Sponsor::getDrivers()
{
	return Drivers;
}

void Sponsor::changePoints()
{
	cout << "Choose a Driver." << endl;
	for(int p = 0; p < numDrivers; p++)
	{
		
	}
}

