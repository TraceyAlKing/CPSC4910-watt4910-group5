#include <string.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>

#include "User.hpp"

User::User()
{
}

User::~User()
{
}

void User::registerUser()
{
	cout << "Enter username: ";
	cin >> username;

	cout << "Enter password: ";
	cin >> password;

	cout << "Enter E-Mail: ";
	cin >> email;

	cout << "Enter Phone Number: ";
	cin >> phone;

	while(phone < 99999999 || phone > 100000000000)
	{
		cout << "Phone number must be 10 digits" << endl;
		cin >> phone;
	}

	srand(time(NULL));

	int randID = rand()%10000;

	cout << "User ID randomly set to ";
	cout << randID << endl;
	ID = randID;
}

string User::getUsername()
{
	return username;
}

string User::getPassword()
{
	return password;
}

string User::getEmail()
{
	return email;
}

long User::getPhone()
{
	return phone;
}

int User::getID()
{
	return ID;
}

void User::setUsername(string i)
{
	username = i;
}

void User::setPassword(string i)
{
	password = i;
}

void User::setEmail(string i)
{
	email = i;
}

void User::setPhone(string i)
{
	phone = atol(i.c_str());
}

void User::setID(string i)
{
	ID = atoi(i.c_str());
}
