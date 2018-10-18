#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#include "Admin.hpp"

Admin::Admin(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address) : User(id, name, email, password, phone, address) 
{

}

Admin::~Admin()
{
}


void Admin::registerAdmin()
{
	registerUser();
}

void Admin::saveAdmin()
{
	ofstream myfile;
	const char* file = getUsername().c_str();
	myfile.open(file);
	
	myfile << "Admin" << "\n";

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
}

void Admin::viewUser()
{
	string input;
	cout << "Enter a user to view their info" << endl;
	cin >> input;
	bool yn = checkForUser(input);
	
	string str;
	
	bool add = true;
	bool plate = true;
	
	ifstream in(input);
	
	if(yn == true)
	{
		int addrNum = 1;
		int pltNum = 1;
		getline(in, str);
		if(str == "Driver")
		{
				cout << "User type: Driver" << endl;
				getline(in, str);
				cout << "Username: " << str << endl;
				getline(in, str);
				cout << "Password: " << str << endl;
				getline(in, str);
				cout << "Real Name: " << str << endl;
				getline(in, str);
				cout << "E-Mail: " << str << endl;
				getline(in, str);
				cout << "Phone Number: " << str << endl;
				getline(in, str);
				cout << "ID: " << str << endl;
				getline(in, str);
				cout << "Sponsor: " << str << endl;
				getline(in, str);
				cout << "Points: " << str << endl;
				getline(in, str);
				cout << "License Number: " << str << endl;
				getline(in, str);
				while(add == true)
				{
					getline(in, str);
					if(str == "ENDADDRESS")
					{
						add = false;
					}
					else
					{	
						cout << "Address "<< addrNum << ": " << str << endl;
						addrNum++;
					}
				}
				getline(in, str);
				while(plate == true)
				{
					getline(in, str);
					if(str == "ENDPLATES")
					{
						plate = false;
					}
					else
					{	
						cout << "Plate "<< pltNum << ": " << str << endl;
						pltNum++;
					}
				}				
		}
		else if(str == "Sponsor")
		{
		}
		else if(str == "Admin")
		{
		}
		else
		{
			cout << "Something went wrong..." << endl;
		}
	}
}

bool Admin::checkForUser(string name) 
{
	string str;
	ifstream in(name);
	
    if (FILE *file = fopen(name.c_str(), "r")) 
	{
		cout << "User found." << endl;
		return true;
    } 
	else 
	{
		cout << "User not found." << endl;
        return false;
    }   
}
