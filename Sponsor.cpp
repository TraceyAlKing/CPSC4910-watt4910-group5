#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

#include "Sponsor.hpp"
#include "Database.hpp"

Sponsor::Sponsor(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string point_value) : 
		User(id, name, email, password, phone, address), point_value_(stoi(point_value))
{

}
Sponsor::Sponsor(const Sponsor& other) : User(other), point_value_(other.point_value_)
{

}
Sponsor& Sponsor::operator=(const Sponsor& rhs)
{
	if(this == &rhs)
		return *this;
	User::operator=(rhs);
	point_value_ = rhs.point_value_;
	return *this;
}
Sponsor::Sponsor()
{
	numDrivers_ = 0;
}

Sponsor::~Sponsor()
{
}

void Sponsor::setDrivers(string* i, int j)
{
	numDrivers_ = j;
	for(int k = 0; k < j; k++)
	{
		Drivers_[k]  = i[k];
	}
}


void Sponsor::registerSponsor(string us, string ps, string nm, string em, long ph, string ad, int pv)
{
        registerUser(string us, string ps, string nm, string em, long ph, string ad);
	
        numDrivers_ = 0;
        point_value_ = pv;
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

void Sponsor::updateSponsor(){

	db().updateSponsor(std::to_string(getID()), getName(), getEmail(), getPassword(), std::to_string(getPhone()), std::to_string(getPV()));
}

void Sponsor::addDriver(string input)
{
	//string input;
	bool tf = checkForDriver(input);
}

void Sponsor::removeDriver(int input)
{
        if(input >= 0 && input <= numDrivers_)
	{
		string p = Drivers_[input];
		
		while(input < numDrivers_)
		{
			Drivers_[input] = Drivers_[input+1]; 
			input++;
		}
		Drivers_[numDrivers_] = "NULL";
                numDrivers_--;
		
		Driver t, t2;
		t2 = t.setDriver(p);
		string idno = to_string(getID());
                t2.removeSponsor(idno, 0);
		t2.saveDriver();
	}
}

void Sponsor::removeDriverWInput(string i)
{
        int u = 0;
	for(int y = 0; y < numDrivers_; y++)
	{
		if(Drivers_[y] == i)
		{
			Drivers_[y] = "NULL";
			int u = y;
			while(u < numDrivers_)
			{
				Drivers_[u] = Drivers_[u+1]; 
				u++;
			}
                    numDrivers_--;
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
	return numDrivers_;
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
				Drivers_[numDrivers_] = name;
				numDrivers_++;
				Driver d;
				d = d.setDriver(name);
				d.addSponsor(to_string(getID()));
				d.saveDriver();
				return true;
		}
		else
		{
			fclose(file);
			return false;
		}
    } 
	else 
	{
        return false;
    }   
}

string* Sponsor::getDrivers()
{
	return Drivers_;
}

void Sponsor::changePoints(int input, int i)
{
        if(input >= 0 && input <= numDrivers_)
	{

		string p = Drivers_[input];
	
		Driver t, t2;
		t2 = t.setDriver(p);
		string idno = to_string(getID());
                t2.setPointsFromSponsor(idno, i);
		t2.saveDriver();
	}
}

int Sponsor::getPV()
{
    return point_value_;
}

void Sponsor::setPV(string i)
{
     point_value_ = atoi(i.c_str());
}

int Sponsor::getNumDrivers()
{
    return numDrivers_;
}
