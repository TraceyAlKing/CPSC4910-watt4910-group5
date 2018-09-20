#include <string>
#include <iostream>
#include "Login.hpp"

//test of login functions

int main(void){

	bool running=true;
	std::string n="",p,result;	
	Login Test;


	while(running){
		while(!Test.Loggedin()){

			std::cout <<"Enter Username: ";
			std::cin >> n;
			if(n=="exit"||n=="Exit"){
				running=false;
				break;
			}
			Test.SetUsername(n);
			
			while (!Test.Exists(n)){
				std::cout <<"Invalid Username try again: ";
				std::cin >> n;
				Test.SetUsername(n);
			}
			std::cout <<"Enter Password: ";
			std::cin >> p;
			
			result = Test.Validate(p);

			std::cout << result << std::endl;
		}
		if(running){
			std::cout<<"Enter a Command: ";
			std::cin >> n;
			if(n=="exit"||n=="Exit") running=false;
			if(n=="logout"||n=="Logout"){
				Test.Logout();
				std::cout << "Logging you out" << std::endl;

			}
		}
	}

}