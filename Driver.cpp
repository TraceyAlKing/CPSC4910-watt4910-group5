#include <string.h>
#include <iostream>
#include <cstdlib>

#include "Driver.hpp"

Driver::Driver(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address, std::string points) : 
		User(id, name, email, password, phone, address), LNum_(), LPNum_(),
		//points_(std::stoi(points)), 
		LPNumNumber_()
{
	//sponsor_ = "";
}

Driver::Driver()
{
	//sponsor_ = "";
	//points_ = 0;
}
Driver::Driver(const Driver& other) : User(other) //points_(other.points_)
{

}
Driver& Driver::operator=(const Driver& rhs)
{
	if(this == &rhs)
		return *this;
	User::operator=(rhs);
	//points_ = rhs.points_;
	return *this;
}

Driver::~Driver()
{
}

void Driver::registerDriver()
{
	registerUser();

	//cout << "Sponsor set to N/A" << endl;
	//sponsor = "N/A";
	
	sponsorNum_ = 0;

	//cout << "Points set to 0" << endl;
	pointNum_ = 0;
	
	cout << "Enter License Number: ";
	cin >> LNum_;
	////
	cout << "Enter Liscence Plate Number: ";
	cin >> LPNum_[0];
	
	LPNumNumber_ = 1;
}

int* Driver::getPoints()
{
	return points_;
}

int Driver::getSponsorNum()
{
	return sponsorNum_;
}

int Driver::getPointNum()
{
	return pointNum_;
}

string* Driver::getSponsor()
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
	myfile << getLicenseNum() << "\n";
	
	myfile << "SPONS" << "\n";
	
	int n = getSponsorNum();
	string* sponsor = getSponsor();
	for(int p = 0; p < n; p++)
	{
		myfile << sponsor[p] << "\n";
	}
	
	myfile << "ENDSPONS" << "\n";
	
	myfile << "ALLPOINTS" << "\n";
	
	n = getPointNum();
	int* points = getPoints();
	for(int p = 0; p < n; p++)
	{
		myfile << points[p] << "\n";
	}
	
	myfile << "ENDPTS" << "\n";
	
	myfile << "ADDRESS" << "\n";
	
	n = getNumAddress();
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
	/*cout << "How many points should be added/removed?" << endl;
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
	return points;*/
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

void Driver::setLNum(int i)
{
	LNum_ = i;
}

void Driver::setLPNum(string* i, int j)
{
	LPNumNumber_ = j;
	for(int k = 0; k < j; k++)
	{
		LPNum_[k]  = atoi(i[k].c_str());
	}
}

void Driver::setSponsors(string* i, int j)
{
	sponsorNum_ = j;
	for(int k = 0; k < j; k++)
	{
		sponsor_[k]  = i[k];
	}
}

void Driver::setPoints2(string* i, int j)
{
	pointNum_ = j;
	for(int k = 0; k < j; k++)
	{
		points_[k]  = atoi(i[k].c_str());
	}
}

void Driver::addLP()
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

void Driver::removeLP()
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

void Driver::viewLP()
{
	
}

Driver Driver::setDriver(string f)
{
	bool add = false;
	bool plt = false;
	bool spo = false;
	bool pts = false;
	
	string addr[10];
	int addrNum = 0;
 	string plts[10];
	int pltNum = 0;
	string sponso[20];
	int sNum = 0;
 	string poin[20];
	int pNum = 0;
	
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
					d.setLNum(atoi(str.c_str()));
				}
				if(str == "ENDADDRESS")
				{
					add = false;
					d.setAddress(addr,addrNum);
				}
				if(str == "ENDPLATES")
				{
					plt = false;
					d.setLPNum(plts,pltNum);
				}
				if(str == "ENDSPONS")
				{
					spo = false;
					d.setSponsors(sponso,sNum);
				}
				if(str == "ENDPTS")
				{
					pts = false;
					d.setPoints2(poin,pNum);
				}
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(pts == true)
				{
					poin[pNum] = str;
					pNum++;
				}
				if(spo == true)
				{
					sponso[sNum] = str;
					sNum++;
				}
				if(plt == true)
				{
					plts[pltNum] = str;
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
				if(str == "SPONS")
				{
					spo = true;
				}
				if(str == "ALLPOINTS")
				{
					pts = true;
				}
			}
			i++;
		}
		return d;
}

int Driver::findSponsor(string i)
{
	for(int p = 0; p < sponsorNum_; p++)
	{
		if(i == sponsor_[p])
		{
			return p;
		}
	}
	return -1;
}

void Driver::setPointsFromSponsor(string i)
{
	int f;
	int n = findSponsor(i);
	if(n != -1)
	{
		cout << "Choose number of points to add/remove to this driver" << endl;
		{
			cin >> f;
			points_[n] = points_[n] + f;
		}
	}
}

void Driver::addSponsor(string i)
{
	sponsor_[sponsorNum_] = i;
	sponsorNum_++;
	points_[pointNum_] = 0;
	pointNum_++;
}

void Driver::removeSponsor(string i)
{
		int n = findSponsor(i);
		if(n != -1)
		{
			for(int p = n; n < sponsorNum_-1; p++)
			{
				sponsor_[p] = sponsor_[p+1];
			}
			sponsor_[sponsorNum_] = "NULL";
			sponsorNum_--;
			points_[pointNum_] = 0;
			pointNum_--;
		}
}
