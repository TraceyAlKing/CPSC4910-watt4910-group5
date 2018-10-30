#include <string>
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <dirent.h>
#include <sys/types.h>
#include <fstream>

#include "User.h"

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
	
	cin.ignore();
	
	cout << "Enter name: ";
	getline(cin,name);

	cout << "Enter E-Mail: ";
	cin >> email;

	cout << "Enter Phone Number: ";
	cin >> phone;

	if(phone < 99999999 || phone > 100000000000)
	{
		cout << "Phone number must be 10 digits" << endl;
		cin >> phone;
	}
	
	cin.ignore();
	
	cout << "Enter Address: ";
	getline(cin,address[0]);
	
	addNum = 1;

	srand(time(NULL));

	int randID = rand()%1000000;
	
	string name;
	name = to_string(randID);
	ifstream in(name);

    while (FILE *file = fopen(name.c_str(), "r")) 
	{
		fclose(file);
		randID = rand()%1000000;
		name = to_string(randID);
		ifstream in(name);
    }  

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

string User::getName()
{
	return name;
}

void User::setUsername(string i)
{
	username = i;
}

void User::setName(string i)
{
	name = i;
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

void User::setAddress(string* i, int j)
{
	addNum = j;
	for(int k = 0; k < j; k++)
	{
		address[k] = i[k];
	}
}

void User::addAddress()
{
	if(addNum == 10)
	{
		cout << "Max number of addresses reached" << endl;
	}
	else
	{
		cin.ignore();
		cout << "Enter Address: ";
		getline(cin,address[addNum]);
		addNum++;
	}
	cout << "Address " << address[addNum-1] << " added" << endl;
}

void User::removeAddress()
{
	int input;
	cout << "Remove which address? " << endl;
	for(int i = 0; i < addNum; i++)
	{
		cout << i << ": " << address[i] << endl;
	}
	cin >> input;
	while(input < 0 || input > addNum)
	{
		cout << "Enter a valid number.";
		cin >> input;
	}
	while(input < addNum)
	{
		address[input] = address[input+1]; 
		input++;
	}
	address[addNum] = "NULL";
	addNum--;
}

void User::updateAddress()
{
	int input;
	int i = 0;
	cout << "Update which address? " << endl;
	for(int i = 0; i < addNum; i++)
	{
		cout << i << ": " << address[i] << endl;
	}
	cin >> input;
	while(input < 0 || input > addNum)
	{
		cout << "Enter a valid number.";
		cin >> input;
	}
	cin.ignore();
	
	cout << "Enter a new address:" << endl;

	getline(cin,address[input]);
}

int User::getNumAddress()
{
	return addNum;
}

string * User::getAddress()
{
	return address;
}

void User::changePassword()
{
	string oldPass;
	cout << "Enter old password: ";
	cin >> oldPass;
	if(oldPass == password)
	{
			cout << "Enter new password: ";
			cin >> password;
	}
	else
	{
		cout << "Password incorrect" << endl;;
	}
}