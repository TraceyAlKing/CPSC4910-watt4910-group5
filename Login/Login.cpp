#include <string>
#include <iostream>
#include "Login.hpp"


//default constructor
Login::Login()
{
	Username="";
	loggedin=false;
}

//constructor that takes username
Login::Login(std::string user) : 
	Username(user)
{
	Type();
}

//validate takes a password sees if it matches the stored username then determines the account type
std::string Login::Validate(std::string pass){
	if(Match(pass)){
		loggedin=true;
		return acctype;
	}
	return "Invalid";
}

// lookup sees which entry the username is so it can compare it to the right password
int Login::Lookup(){
	//normally we would probably query to see if the username exists in the database
	//but here we are just going to look at an array
	int x=0;
	for(std::string n : names){
		if(n==Username){
			return x;
		}
		x++;
	}
	return -1;

}

// sees if a username exists in the list
bool Login::Exists(std::string name){
	//normally we would probably query to see if the username exists in the database
	//but here we are just going to look at an array
	int x=0;
	for(std::string n : names){
		if(n==name){
			return true;
		}
		x++;
	}
	return false;

}

// checks if username and password match
bool Login::Match(std::string password){
	//check to see if username and password match
	int n=Login::Lookup();
	if(names[n]==Username&&pass[n]==password){
		return true;
	}
	return false;


}

// returns if the username is logged in
bool Login::Loggedin(){
	return loggedin;
}

// logs out and clears the object
void Login::Logout(){
	Username="";
	loggedin=false;
}

// sets the acctype based on what the username is
void Login::Type(){
	//lookup username then find type associated with it
	if(Exists(Username)) acctype = type[Lookup()];
	else acctype="Invalid";
}

// sets a new username
void Login::SetUsername(std::string name){
	Username=name;
	Type();
}