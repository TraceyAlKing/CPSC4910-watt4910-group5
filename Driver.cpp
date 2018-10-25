#include <string.h>
#include <iostream>
#include <cstdlib>

#include "Driver.hpp"

Driver::Driver(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string points) : 
		User(id, name, email, password, phone, address), LNum_(), LPNum_(),
		points_(std::stoi(points)), LPNumNumber_()
{
	sponsor_ = "";
}

Driver::Driver()
{
	sponsor_ = "";
	points_ = 0;
}
Driver::Driver(const Driver& other) : User(other), points_(other.points_)
{

}
Driver& Driver::operator=(const Driver& rhs)
{
	if(this == &rhs)
		return *this;
	User::operator=(rhs);
	points_ = rhs.points_;
	return *this;
}

Driver::~Driver()
{
}

void Driver::registerDriver()
{
	registerUser();

	//cout << "Sponsor set to N/A" << endl;
	sponsor_ = "N/A";

	//cout << "Points set to 0" << endl;
	points_ = 0;
	
	cout << "Enter License Number: ";
	cin >> LNum_;
	////
	cout << "Enter Liscence Plate Number: ";
	cin >> LPNum_[0];
	
	LPNumNumber_ = 1;
}

int Driver::getPoints()
{
	return points_;
}

string Driver::getSponsor()
{
	return sponsor_;
}

void Driver::saveDriver()
{
	ofstream myfile;
	int p = getID();
	string filename =  to_string(p);
	const char* file = filename.c_str();
	myfile.open(file);
	
	myfile << "Driver" << "\n";

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getName() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << getSponsor() << "\n";
	myfile << getPoints() << "\n";
	myfile << getLicenseNum() << "\n";
	myfile << "ADDRESS" << "\n";
	
	int n = getNumAddress();
	string* addresses = getAddress();
	for(int p = 0; p < n; p++)
	{
		myfile << addresses[p] << "\n";
	}
	
		myfile << "ENDADDRESS" << "\n";
		
		myfile << "PLATES" << "\n";
		n = getLNumNum();
		int* plates = getPlates();
		for(int p = 0; p < n; p++)
		{
			myfile << LPNum_[p] << "\n";
		}
		
		myfile << "ENDPLATES" << "\n";
		
}

int Driver::changePoints()
{
	cout << "How many points should be added/removed?" << endl;
	int i;
	cin >> i;
	int tPoints = points_;
	points_ = points_ + i;
	while(points_ < 0)
	{
		cout << "Total points cannot be below 0" << endl;
		points_ = tPoints;
		cin >> i;

		tPoints = points_;
		points_ = points_ + i;
	}
	cout << "Total Points: " << points_ << endl;
	return points_;
}

void Driver::setSponsor(string i)
{
	sponsor_ = i;
}

void Driver::setPoints(string i)
{
	points_ = atoi(i.c_str());
}

int Driver::getLicenseNum() 
{
	return LNum_;
}

int Driver::getLNumNum()
{
	return LPNumNumber_;
}

void Driver::updateLNum()
{
	cout << "Enter a new Lisence Number" << endl;
	cin >> LNum_;
}

int* Driver::getPlates()
{
	return LPNum_;
}

void Driver::setLPNum(std::string i, int j)
{
	LPNum_[j] = std::stoi(i);
}

void Driver::setLicenseNum(std::string i){
    LNum_ = std::stoi(i);
}

void Driver::addLPNum()
{
	if(LPNumNumber_ == 10)
	{
		cout << "Max number of license plate numbers reached" << endl;
	}
	else
	{
		cout << "Enter License Plate Number: ";
		cin >> LPNum_[LPNumNumber_];
		LPNumNumber_++;
	}
	cout << "L. Plate  " << LPNum_[LPNumNumber_-1] << " added" << endl;
}

void Driver::removeLPNum()
{
	int input;
	cout << "Remove which license plate? " << endl;
	for(int i = 0; i < LPNumNumber_; i++)
	{
		cout << i << ": " << LPNum_[i] << endl;
	}
	cin >> input;
	while(input < 0 || input > LPNumNumber_)
	{
		cout << "Enter a valid number.";
		cin >> input;
	}
	while(input < LPNumNumber_)
	{
		LPNum_[input] = LPNum_[input+1]; 
		input++;
	}
	LPNum_[LPNumNumber_] = 0;
	LPNumNumber_--;
}

int* Driver::viewLPNum()
{
	
}
Driver Driver::setDriver(string f)
{
	bool add = false;
	bool plt = false;
	string addr[10];
	int addrNum = 0;
	std::vector<string> plts;
	int pltNum = 0;
	
		const char *buff = f.c_str();

		ifstream in(buff);
		
		Driver d;

		string str;
		string typeOfUser;
		
		d.setID(f);

		int i = 0;

		while(getline(in, str))
		{
			if(i == 0)
			{
				typeOfUser = str;
			}
			if(typeOfUser == "Driver")
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
					d.setSponsor(str);
				}
				if(i == 7)
				{
					d.setPoints(str);
				}
				if(i == 8)
                {
                    d.setLicenseNum(str);
				}
				if(str == "ENDADDRESS")
				{
					add = false;
					d.setAddress(addr,addrNum);
				}
				if(str == "ENDPLATES")
				{
					plt = false;
					//@TODO: not sure how you're doing this, but prefer this
					for(int z = 0; z < plts.size(); z++)
						d.setLPNum(plts[z], z);
				}
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(plt == true)
				{
					plts.push_back(str);
					pltNum++;
				}
				if(str == "ADDRESS")
				{
					add = true;
				}
				if(str == "PLATES")
				{
					plt = true;
				}
			}
			i++;
		}
		return d;
}
