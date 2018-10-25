#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

#include "User.hpp"

User::User(std::string id, std::string name, std::string email, std::string password,
		std::string phone, std::string address) : 
		id_(std::stoi(id)), name_(name), email_(email), password_(password), 
		phone_(std::stol(phone)), address_()
{
	address_[0] = address;
}

User::User()
{
}

User::~User()
{
}

void User::registerUser()
{
	cout << "Enter username: ";
	cin >> username_;

	cout << "Enter password: ";
	cin >> password_;
	
	cin.ignore();
	
	cout << "Enter name: ";
	getline(cin, name_);

	cout << "Enter E-Mail: ";
	cin >> email_;

	cout << "Enter Phone Number: ";
	cin >> phone_;

	if(phone_ < 99999999 || phone_ > 100000000000)
	{
		cout << "Phone number must be 10 digits" << endl;
		cin >> phone_;
	}
	
	cin.ignore();
	
	cout << "Enter Address: ";
	getline(cin, address_[0]);
	
	addNum_ = 1;

	srand(time(NULL));

	int randID = rand()%10000;

	cout << "User ID randomly set to ";
	cout << randID << endl;
	id_ = randID;
}

string User::getUsername()
{
	return username_;
}

string User::getPassword()
{
	return password_;
}

string User::getEmail()
{
	return email_;
}

long User::getPhone()
{
	return phone_;
}

int User::getID()
{
	return id_;
}

string User::getName()
{
	return name_;
}

void User::setUsername(string i)
{
	username_ = i;
}

void User::setName(string i)
{
	name_ = i;
}

void User::setPassword(string i)
{
	password_ = i;
}

void User::setEmail(string i)
{
	email_ = i;
}

void User::setPhone(string i)
{
	phone_ = atol(i.c_str());
}

void User::setID(string i)
{
	id_ = atoi(i.c_str());
}

void User::setAddress(string* i, int j)
{
	addNum_ = j;
	for(int k = 0; k < j; k++)
	{
		address_[k] = i[k];
	}
}

void User::addAddress()
{
	if(addNum_ == 10)
	{
		cout << "Max number of addresses reached" << endl;
	}
	else
	{
		cin.ignore();
		cout << "Enter Address: ";
		getline(cin, address_[addNum_]);
		addNum_++;
	}
	cout << "Address " << address_[addNum_-1] << " added" << endl;
}

void User::removeAddress()
{
	int input;
	cout << "Remove which address? " << endl;
	for(int i = 0; i < addNum_; i++)
	{
		cout << i << ": " << address_[i] << endl;
	}
	cin >> input;
	while(input < 0 || input > addNum_)
	{
		cout << "Enter a valid number.";
		cin >> input;
	}
	while(input < addNum_)
	{
		address_[input] = address_[input+1]; 
		input++;
	}
	address_[addNum_] = "NULL";
	addNum_--;
}


int User::getNumAddress()
{
	return addNum_;
}

string * User::getAddress()
{
	return address_;
}

void User::changePassword()
{
	string oldPass;
	cout << "Enter old password: ";
	cin >> oldPass;
	if(oldPass == password_)
	{
			cout << "Enter new password: ";
			cin >> password_;
	}
	else
	{
		cout << "Password incorrect";
	}
}

void User::updateAddress()
{

}
