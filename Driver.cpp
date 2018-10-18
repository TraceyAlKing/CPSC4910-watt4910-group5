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

	//cout << "Sponsor set to N/A" << endl;
	sponsor = "N/A";

	//cout << "Points set to 0" << endl;
	points = 0;
	
	cout << "Enter License Number: ";
	cin >> LNum;
	////
	cout << "Enter Liscence Plate Number: ";
	cin >> LPNum[0];
	
	LPNumNumber = 1;
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
			myfile << LPNum[p] << "\n";
		}
		
		myfile << "ENDPLATES" << "\n";
		
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

int Driver::getLicenseNum() 
{
	return LNum;
}

int Driver::getLNumNum()
{
	return LPNumNumber;
}

void Driver::updateLNum()
{
	cout << "Enter a new Lisence Number" << endl;
	cin >> LNum;
}

int* Driver::getPlates()
{
	return LPNum;
}

void Driver::setLNum(int i)
{
	LNum = i;
}

void Driver::setLPNum(string* i, int j)
{
	LPNumNumber = j;
	for(int k = 0; k < j; k++)
	{
		LPNum[k]  = atoi(i[k].c_str());
	}
}

void Driver::addLP()
{
	if(LPNumNumber == 10)
	{
		cout << "Max number of license plate numbers reached" << endl;
	}
	else
	{
		cout << "Enter License Plate Number: ";
		cin >> LPNum[LPNumNumber];
		LPNumNumber++;
	}
	cout << "L. Plate  " << LPNum[LPNumNumber-1] << " added" << endl;
}

void Driver::removeLP()
{
	int input;
	cout << "Remove which license plate? " << endl;
	for(int i = 0; i < LPNumNumber; i++)
	{
		cout << i << ": " << LPNum[i] << endl;
	}
	cin >> input;
	while(input < 0 || input > LPNumNumber)
	{
		cout << "Enter a valid number.";
		cin >> input;
	}
	while(input < LPNumNumber)
	{
		LPNum[input] = LPNum[input+1]; 
		input++;
	}
	LPNum[LPNumNumber] = 0;
	LPNumNumber--;
}

void Driver::viewLP()
{
	
}

Driver Driver::setDriver(string f)
{
	bool add = false;
	bool plt = false;
	string addr[10];
	int addrNum = 0;
 	string plts[10];
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
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
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
			}
			i++;
		}
		return d;
}
