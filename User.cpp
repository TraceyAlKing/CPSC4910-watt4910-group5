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

User::User(const User& other) : id_(other.id_), name_(other.name_), email_(other.email_), password_(other.password_), 
		phone_(other.phone_), address_()
{
	//@TODO: turn address_ into a vector
	for(int i = 0; i < 10; i++)
		address_[i] = other.address_[i];
}
User& User::operator=(const User& rhs){
	if(this == &rhs)
		return *this;

	id_ = (rhs.id_);
	name_ = (rhs.name_);
	email_ = (rhs.email_);
	password_ = (rhs.password_);
	phone_ = (rhs.phone_);
	//@TODO: turn address_ into a vector
	for(int i = 0; i < 10; i++)
		address_[i] = rhs.address_[i];
	return *this;
}

User::~User()
{
}

void User::registerUser(string us, string ps, string nm, string em, long ph, string ad)
{
        username_ = us;
        password_ = ps;
        name_ = nm;
        email_ = em;
        phone_ = ph;
        address_[0] = ad;
	addNum_ = 1;

	srand(time(NULL));

	int randID = rand()%10000;

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

void User::addAddress(string i)
{
        if(addNum_ < 10)
	{
		cin.ignore();
                address_[addNum_] = i;
		addNum_++;
	}
}

void User::removeAddress(int i)
{
	int input;
	cin >> input;
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

void User::changePassword(string oldp, string newp)
{
        if(oldp == password_)
	{
            password_ = newp;
	}
}

void User::updateAddress(int i, string s)
{
    address_[i] = s;
}
