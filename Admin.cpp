#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <dirent.h>
#include <sys/types.h>

using namespace std;

#include "Admin.hpp"
#include "Database.hpp"

Admin::Admin(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address) : User(id, name, email, password, phone, address) 
{

}

Admin::Admin()
{

}

Admin::~Admin()
{
}

Admin::Admin(const Admin& other) : User(other)
{

}
Admin& Admin::operator=(const Admin& rhs)
{
	if(this == &rhs)
		return *this;
	User::operator=(rhs);
	return *this;
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
	int p = getID();
	string filename =  to_string(p);
	const char* file = filename.c_str();
	myfile.open(file);
	
	myfile << "Admin" << "\n";

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getName() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << "ADDRESS" << "\n";
	
	int n = getNumAddress();
	string* addresses = getAddress();
	for(int p = 0; p < n; p++)
	{
		myfile << addresses[p] << "\n";
	}
	
		myfile << "ENDADDRESS" << "\n";
}

void Admin::updateAdmin(){

	db().updateAdmin(std::to_string(getID()), getName(), getEmail(), getPassword(), std::to_string(getPhone()));
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
			cout << "User type: Sponsor" << endl;
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
				cout << "Point Value: " << str << endl;
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
		return true;
    } 
	else 
	{
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

/* @TODO: add this code back, errors compiling
void Admin::listOfUsernames()
{
	struct dirent *entry;
	Driver d;
	Sponsor s;
    //Admin a;
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
						getline(in, str);
						cout << "Driver: " << str << endl;
				}
				if(str == "Sponsor")
				{
						getline(in, str);
						cout << "Sponsor: " << str << endl;
				}
				if(str == "Admin")
				{
						getline(in, str);
						cout << "Admin: " << str << endl;
				}
		}
   }
   closedir(dir);
}
*/

/* @TODO: add this code back, errors compiling
void Admin::listOfAdminUsernames()
{
	struct dirent *entry;
    //Admin a;
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
						getline(in, str);
						cout << "Admin: " << str << endl;
				}
		}
   }
   closedir(dir);
}
*/

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
					if(yn == 'Y')
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
					if(yn == 'Y')
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
					if(yn == 'Y')
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
/* @TODO: add this code back, errors compiling
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
					Driver d;
					d = d.setDriver(user);
					editDriver(d);
				}
				else if(str == "Sponsor")
				{
					cout << "Sponsor " << user << " found" << endl;
					Sponsor d;
					d.setSponsor(user);
					editSponsor(d);
				}
				else if(str == "Admin")
				{
					cout << "Admin " << user << " found" << endl;
					Admin d = setAdmin(user);
					editAdmin(d);
				}
		}
}
*/
/* @TODO: add this code back, errors compiling
Admin Admin::setAdmin(string f)
{
	bool add = false;
	string addr[10];
	int addrNum = 0;
	
		const char *buff = f.c_str();

		ifstream in(buff);
		
        Admin d = Admin();

		string str;
		string typeOfUser;

		int i = 0;

		while(getline(in, str))
		{
			if(i == 0)
			{
				typeOfUser = str;
			}
			if(typeOfUser == "Admin")
			{
				if(i == 1)
				{
					d.setUsername(str);
				}
				if(i == 2)
				{
					d.setPassword(str);
				}
				if(i == 3)
				{
					d.setName(str);
				}
				if(i == 4)
				{
					d.setEmail(str);
				}
				if(i == 5)
				{
					d.setPhone(str);
				}
				if(str == "ENDADDRESS")
				{
					add = false;
					d.setAddress(addr,addrNum);
				}
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(str == "ADDRESS")
				{
					add = true;
				}
			}
			i++;
		}
		return d;
}
*/
/*void Admin::editDriver(Driver name)
{
	cout << "Choose aspect to edit" << endl;
	cout << "Username (J)" << endl;
	cout << "Password (P)" << endl;
	cout << "Email (E)" << endl;
	cout << "Real Name (R)" << endl;
	cout << "Phone (H)" << endl;
	cout << "Add Address (A)" << endl;
	cout << "Remove Address (L)" << endl;
	cout << "Update Address (U)" << endl;
	cout << "Get Points (O)" << endl;
	cout << "Update Points (X)" << endl;
	cout << "Drop Sponsor (Q)" << endl;
	char v;
	cin >> v;
	
	string input;
	
	if(v == 'J')
	{
		cout << "Type in new username" << endl;
		cin >> input;
		name.setUsername(input);
		name.saveDriver();
	}
	else if(v == 'P')
	{
		name.changePassword();
		name.saveDriver();
	}
	else if(v == 'E')
	{
		cout << "Type in new e-mail" << endl;
		cin >> input;
		name.setEmail(input);
		name.saveDriver();
	}
	else if(v == 'H')
	{
		cout << "Type in new phone number" << endl;
		cin >> input;
		name.setPhone(input);
		name.saveDriver();
	}
	else if(v == 'A')
	{
		name.addAddress();
		name.saveDriver();
	}
	else if(v == 'L')
	{
		name.removeAddress();
		name.saveDriver();
	}
	else if(v == 'U')
	{
		//@TODO: Add updateAddress()
		//name.updateAddress();
		name.saveDriver();
	}
	else if(v == 'O')
	{
		//int o = name.getPoints();
		//cout << "Current Points: " << o << endl;
	}
	else if(v == 'X')
	{
		//int o = name.getPoints();
		//cout << "Current Points: " << o << endl;
		name.changePoints();
		name.saveDriver();
	}
	else if(v == 'Q')
	{
                string h = name.getSponsor();
		if(h == "N/A")
		{
			cout << "Driver does not have a sponsor." << endl;
		}
		else
		{
			Sponsor s, s2;
			cout << "Sponsor: " << h << endl;
			
			s = s2.setSponsor(h);
			s.removeDriverWInput(to_string(name.getID()));
			s.saveSponsor();
			
			//name.setSponsor("N/A");
			name.saveDriver();
                        //cout << "Sponsor removed from Driver" << endl;
		}
	}	
}

void Admin::editAdmin(Admin name)
{
        cout << "Choose aspect to edit" << endl;
        cout << "Username (Q)" << endl;
	cout << "Password (P)" << endl;
	cout << "Email (E)" << endl;
	cout << "Real Name (R)" << endl;
	cout << "Phone (H)" << endl;
	cout << "Add Address (A)" << endl;
	cout << "Remove Address (L)" << endl;
        cout << "Update Address (U)" << endl;
	char v;
        cin >> v;
	
	string input;
	
	if(v == 'Q')
	{
		cout << "Type in new username" << endl;
		cin >> input;
		name.setUsername(input);
		//name.saveSponsor();
	}
	else if(v == 'P')
	{
		name.changePassword();
		name.saveAdmin();
	}
	else if(v == 'E')
	{
		cout << "Type in new e-mail" << endl;
		cin >> input;
		name.setEmail(input);
		name.saveAdmin();
	}
	else if(v == 'H')
	{
		cout << "Type in new phone number" << endl;
		cin >> input;
		name.setPhone(input);
		name.saveAdmin();
	}
	else if(v == 'A')
	{
		name.addAddress();
		name.saveAdmin();
	}
	else if(v == 'L')
	{
		name.removeAddress();
		name.saveAdmin();
	}
	else if(v == 'U')
	{
		//name.updateAddress();
		name.saveAdmin();
	}
}
*/
/*void Admin::editSponsor(Sponsor name)
{
cout << "Choose aspect to edit" << endl;
	cout << "Username (Q)" << endl;
	cout << "Password (P)" << endl;
	cout << "Email (E)" << endl;
	cout << "Real Name (R)" << endl;
	cout << "Phone (H)" << endl;
	cout << "Add Address (A)" << endl;
	cout << "Remove Address (L)" << endl;
	cout << "Update Address (U)" << endl;
	char v;
	cin >> v;
	
	string input;
	
	if(v == 'Q')
	{
		cout << "Type in new username" << endl;
		cin >> input;
		name.setUsername(input);
		name.saveSponsor();
	}
	else if(v == 'P')
	{
		name.changePassword();
		name.saveSponsor();
	}
	else if(v == 'E')
	{
		cout << "Type in new e-mail" << endl;
		cin >> input;
		name.setEmail(input);
		name.saveSponsor();
	}
	else if(v == 'H')
	{
		cout << "Type in new phone number" << endl;
		cin >> input;
		name.setPhone(input);
		name.saveSponsor();
	}
	else if(v == 'A')
	{
		name.addAddress();
		name.saveSponsor();
	}
	else if(v == 'L')
	{
		name.removeAddress();
		name.saveSponsor();
	}
	else if(v == 'U')
	{
		//name.updateAddress();
		name.saveSponsor();
	}
}*/

string viewUsernameDriver(Driver d)
{
    return d.getUsername();
}

void setUsernameDriver(Driver d, string p)
{
    d.setUsername(p);
    d.saveDriver();
}

string viewUsernameSponsor(Sponsor d)
{
    return d.getUsername();
}

void setUsernameSponsor(Sponsor d, string p)
{
    d.setUsername(p);
    d.saveSponsor();
}

string viewUsernameAdmin(Admin d)
{
    return d.getUsername();
}

void setUsernameSponsor(Admin d, string p)
{
    d.setUsername(p);
    d.saveAdmin();
}

string viewPasswordDriver(Driver d)
{
    return d.getPassword();
}

void setPasswordDriver(Driver d, string p)
{
    d.setPassword(p);
    d.saveDriver();
}

string viewPasswordSponsor(Sponsor d)
{
    return d.getPassword();
}

void setPasswordSponsor(Sponsor d, string p)
{
    d.setPassword(p);
    d.saveSponsor();
}

string viewPasswordAdmin(Admin d)
{
    return d.getPassword();
}

void setPasswordSponsor(Admin d, string p)
{
    d.setPassword(p);
    d.saveAdmin();
}

string viewStatus(Driver d)
{
    return d.getStatus();
}

void changeStatus(Driver d)
{
    d.switchStatus();
}


