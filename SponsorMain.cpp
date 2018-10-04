#include "Sponsor.hpp"

using namespace std;

Sponsor d;

int main(int argc, char *argv[])
{
	char regL;
	cout << "Register (R) or Load (L)?" << endl;
	bool add = false;
	bool drv = false;
	string addr[10];
	int addrNum = 0;
 	string dvr[100];
	int dvrNum = 0;

	cin >> regL;

	if(regL == 'R')
	{
		d.registerSponsor();

		cout << endl;

		cout << "User registered." << endl;

		cout << endl;

		d.saveSponsor();
	}
	if(regL == 'L')
	{
		string filename;

		cout << "Choose a User" << endl;
		cin >> filename;

		const char *buff = filename.c_str();

		ifstream in(buff);

		string str;
		string typeOfUser;

		int i = 0;

		while(getline(in, str))
		{
			if(i == 0)
			{
				typeOfUser = str;
			}
			if(typeOfUser == "Sponsor")
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
					d.setID(str);
				}
				if(str == "ENDADDRESS")
				{
					add = false;
					d.setAddress(addr,addrNum);
				}
				if(str == "ENDSPONS")
				{
					drv = false;
					d.setDrivers(dvr,dvrNum);
				}
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(drv == true)
				{
					dvr[dvrNum] = str;
					dvrNum++;
				}
				if(str == "ADDRESS")
				{
					add = true;
				}
				if(str == "SPONS2")
				{
					drv = true;
				}
			}
			i++;
	}
	
	string t;
	string* t2;

	char input;
	int* i2;
		
	long l;
	int x = 0;

	cout << "Add Driver activated!!!" << endl;

	d.addDriver();

	d.saveSponsor();
	
	}
}
