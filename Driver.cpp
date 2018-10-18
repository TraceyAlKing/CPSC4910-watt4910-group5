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
	const char* file = getUsername().c_str();
	myfile.open(file);
	
	myfile << "Driver" << "\n";

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getName() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << getID() << "\n";	
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
