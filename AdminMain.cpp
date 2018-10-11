#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

#include "Admin.h"

Admin::Admin()
{

}

Admin::~Admin()
{
}


void Admin::registerAdmin()
{
	registerUser();
}

void Admin::registerDriver()
{
	Driver d;
	d.registerDriver();
	d.saveDriver();
}

void Admin::registerSponsor()
{
	Sponsor s;
	s.registerSponsor();
	s.saveSponsor();
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
					if(str == "ENDSPONS")
					{
						plate = false;
					}
					else
					{	
						cout << "Driver "<< pltNum << ": " << str << endl;
						pltNum++;
					}
				}				
		}
		else if(str == "Admin")
		{
				cout << "User type: Admin" << endl;
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

void Admin::listOfFiles()
{
   struct dirent *entry;
   DIR *dir = opendir(".");
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) {
   cout << entry->d_name << endl;
   }
   closedir(dir);
}

void Admin::viewAllDrivers()
{
	struct dirent *entry;
   DIR *dir = opendir(".");
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) 
   {
   		string name = entry->d_name;
		ifstream in(name);
  		if(FILE *file = fopen(name.c_str(), "r"))
		{
				string str;
				getline(in, str);
				if(str == "Driver")
				{
					cout << entry->d_name << endl;
				}
		}
   }
   closedir(dir);
}

void Admin::viewAllSponsors()
{
		struct dirent *entry;
   DIR *dir = opendir(".");
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) 
   {
   		string name = entry->d_name;
		ifstream in(name);
  		if(FILE *file = fopen(name.c_str(), "r"))
		{
				string str;
				getline(in, str);
				if(str == "Sponsor")
				{
					cout << entry->d_name << endl;
				}
		}
   }
   closedir(dir);
}

void Admin::viewAllAdmins()
{
			struct dirent *entry;
   DIR *dir = opendir(".");
   if (dir == NULL) {
      return;
   }
   while ((entry = readdir(dir)) != NULL) 
   {
   		string name = entry->d_name;
		ifstream in(name);
  		if(FILE *file = fopen(name.c_str(), "r"))
		{
				string str;
				getline(in, str);
				if(str == "Admin")
				{
					cout << entry->d_name << endl;
				}
		}
   }
   closedir(dir);
}

void Admin::deleteUser()
{
	cout << "Type in user you want to delete" << endl;
	string name, str;
	cin >> name;
	
	ifstream in(name);
	if(FILE *file = fopen(name.c_str(), "r"))
		{
				getline(in, str);
				if(str == "Admin")
				{
					cout << name << " is an admin" << endl;
					cout << "Are you sure you want to delete this user? (Y/N)" << endl;
					char yn;
					cin >> yn;
					if(yn = 'Y')
					{
					if( remove(name.c_str()) != 0 )
					{
    						perror( "Error deleting file" );
					}
 				 	else
				 	{
    						puts( "File successfully deleted" );
					}
					}
				}
				else if(str == "Driver")
				{
					cout << name << " is a driver" << endl;
					cout << "Are you sure you want to delete this user? (Y/N)" << endl;
					char yn;
					cin >> yn;
					if(yn = 'Y')
					{
					if( remove(name.c_str()) != 0 )
					{
    						perror( "Error deleting file" );
					}
 				 	else
				 	{
    						puts( "File successfully deleted" );
					}
					}
				}
				else if(str == "Sponsor")
				{
					cout << name << " is a sponsor" << endl;
					cout << "Are you sure you want to delete this user? (Y/N)" << endl;
					char yn;
					cin >> yn;
					if(yn = 'Y')
					{
					if( remove(name.c_str()) != 0 )
					{
    						perror( "Error deleting file" );
					}
 				 	else
				 	{
    						puts( "File successfully deleted" );
					}
					}
				}
				else
				{
					cout << "File found, but an error occured" << endl;
				}
		}
		else
		{
			cout << "File not found" << endl;
		}
}

void Admin::editUser()
{
	cout << "Which user's info do you want to edit?" << endl;
	string user;
	cin >> user;
	ifstream in(user);
	string str;
	if(FILE *file = fopen(user.c_str(), "r"))
		{
				getline(in, str);
				if(str == "Driver")
				{
					cout << "Driver " << user << " found" << endl;
					Sponsor s;
					Driver d = s.setDriver(user);
					editDriver(d);
				}
		}
	
}

void Admin::editDriver(Driver name)
{
	cout << "Choose aspect to edit" << endl;
	cout << "Password (P)" << endl;	
	char v;
	cin >> v;
	if(v == 'P')
	{
		name.changePassword();
		name.saveDriver();
	}
}
