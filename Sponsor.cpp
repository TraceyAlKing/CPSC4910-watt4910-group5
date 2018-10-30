#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#include "Sponsor.h"

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
	}
}


void Sponsor::registerSponsor()
{
	registerUser();
	
	cout << "Add drivers later." << endl;
	
		numDrivers = 0;
		
	cout << "Set a total for points: ";
	
	cin >> pointValue;
}

void Sponsor::saveSponsor()
{
	ofstream myfile;
	int p = getID();
	
	string filename = to_string(p);
	const char* file = filename.c_str();
	myfile.open(file);
	
	myfile << "Sponsor" << "\n";

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getName() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << getPV() << "\n";
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
		for(int p = 0; p < n; p++)
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
}

void Sponsor::removeDriver()
{
	int input;
	cout << "Remove which Driver? " << endl;
	for(int i = 0; i < numDrivers; i++)
	{
		cout << i << ": " << Drivers[i] << endl;
	}
	cin >> input;
	if(input < 0 || input > numDrivers)
	{
		cout << "Invalid number..." << endl;
	}
	else
	{
		string p = Drivers[input];
		
		while(input < numDrivers)
		{
			Drivers[input] = Drivers[input+1]; 
			input++;
		}
		Drivers[numDrivers] = "NULL";
		numDrivers--;
		
		Driver t, t2;
		t2 = t.setDriver(p);
		string idno = to_string(getID());
		t2.removeSponsor(idno);
		t2.saveDriver();
	}
}

void Sponsor::removeDriverWInput(string i)
{
	int u = 0;
	int y = 0;
	//cout << "Target: " << i << endl;
	for(y; y < numDrivers; y++)
	{
		if(Drivers[y] == i)
		{
			cout << "Driver found; will remove" << endl;
			Drivers[y] = "NULL";
			int u = y;
			while(u < numDrivers)
			{
				Drivers[u] = Drivers[u+1]; 
				u++;
			}
			numDrivers--;
		}
	}
}

Sponsor Sponsor::setSponsor(string f)
{
	bool add = false;
	bool drv = false;
	string addr[10];
	int addrNum = 0;
 	string dvr[100];
	int dvrNum = 0;
	
		const char *buff = f.c_str();

		ifstream in(buff);
		
		Sponsor d;
		
		d.setID(f);

		string str;
		string typeOfUser;

		int i = 0;

		while(getline(in, str))
		{
			if(i == 0)
			{
				typeOfUser = str;
			}
			if(typeOfUser == "Sponsor")
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
				if(i == 6)
				{
					d.setPV(str);
				}
				if(str == "ENDADDRESS")
				{
					add = false;
					d.setAddress(addr,addrNum);
				}
				if(str == "ENDSPONS")
				{
					drv = false;
					d.setDrivers(dvr,dvrNum);
				}
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(drv == true)
				{
					dvr[dvrNum] = str;
					dvrNum++;
				}
				if(str == "ADDRESS")
				{
					add = true;
				}
				if(str == "SPONS2")
				{
					drv = true;
				}
			}
			i++;
		}
		return d;
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
		      	fclose(file);
				cout << "Driver found" << endl;
				Drivers[numDrivers] = name;
				numDrivers++;
				Driver d;
				d = d.setDriver(name);
				d.addSponsor(to_string(getID()));
				d.saveDriver();
				return true;
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
	int input;
	cout << "Choose a Driver." << endl;
	for(int i = 0; i < numDrivers; i++)
	{
		cout << i << ": " << Drivers[i] << endl;
	}
	cin >> input;
	if(input < 0 || input > numDrivers)
	{
		cout << "Invalid number..." << endl;
	}
	else
	{
		string p = Drivers[input];
	
		Driver t, t2;
		t2 = t.setDriver(p);
		string idno = to_string(getID());
		t2.setPointsFromSponsor(idno);
		t2.saveDriver();
	}
}

int Sponsor::getPV()
{
	return pointValue;

}

void Sponsor::setPV(string i)
{
	 pointValue = atoi(i.c_str());
}

