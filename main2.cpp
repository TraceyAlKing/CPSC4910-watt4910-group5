#include "Driver.hpp"

using namespace std;

Driver d;

int main(int argc, char *argv[])
{
	char regL;
	cout << "Register (R) or Load (L)?" << endl;
	bool add = false;
	bool plt = false;
	string addr[10];
	int addrNum = 0;
 	string plts[10];
	int pltNum = 0;

	cin >> regL;

	if(regL == 'R')
	{
		d.registerDriver();

		cout << endl;

		cout << "User registered." << endl;

		cout << endl;

		d.saveDriver();
	}
	else if(regL == 'L')
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
					d.setID(str);
				}
				if(i == 7)
				{
					d.setSponsor(str);
				}
				if(i == 8)
				{
					d.setPoints(str);
				}
				if(i == 9)
				{
					d.setPoints(str);
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

		cout << endl;
		cout << "User " << buff << " loaded" << endl;
		cout << endl;

		in.close();
	}

	string t;
	string* t2;

	char input;
	int i;
	int* i2;
		
	long l;
	int x = 0;

	cout << "Choose action:" << endl;

	cout << "View Username (U)" << endl;
	cout << "View Password (P)" << endl;
	cout << "View Name (F)" << endl;
	cout << "View Email (E)" << endl;
	cout << "View Phone (H)" << endl;
	cout << "View ID (I)" << endl;
	cout << "View Sponsor (S)" << endl;
	cout << "View Points (O)" << endl;
	cout << "Change Points (C)" << endl;
	cout << "Change Password (Q)" << endl;
	cout << "View Address (V)" << endl;
	cout << "Add Address (A)" << endl;
	cout << "Remove Address (R)" << endl;
	cout << "Update Name (N)" << endl;
	cout << "Update License (L)" << endl;
	cout << "Add License Plate (Z)" << endl;
	cout << "Remove License Plate (Q)" << endl;
	cout << "View License Plate (W)" << endl;

	while(x == 0)
	{
		cin >> input;

		if(input == 'U')
		{		
			t = d.getUsername();
			cout <<	"Username: " << t << endl;
		}
		else if(input == 'L')
		{
			d.updateLNum();
		}
		else if(input == 'Z')
		{
			d.addLP();
		}
		else if(input == 'Q')
		{
			d.removeLP();
		}
		else if(input == 'W')
		{
			i2 = d.getPlates();
			i = d.getLNumNum();
			for(int o = 0; o < i; o++)
			{
				cout << "Plate " << o << ": " << i2[o] << endl;
			}
		}
		else if(input == 'P')
		{
			t = d.getPassword();
			cout <<	"Password: " << t << endl;
		}
		else if(input == 'E')
		{
			t = d.getEmail();
			cout <<	"E-Mail: " << t << endl;
		}
		else if(input == 'H')
		{
			l = d.getPhone();
			cout <<	"Phone: " << l << endl;
		}
		else if(input == 'I')
		{
			i = d.getID();
			cout <<	"ID: " << i << endl;
		}
		else if(input == 'S')
		{
			t = d.getSponsor();
			cout <<	"Sponsor: " << t << endl;
		}
		else if(input == 'O')
		{
			i = d.getPoints();
			cout <<	"Points: " << i << endl;
		}
		else if(input == 'A')
		{
			d.addAddress();
		}
		else if(input == 'R')
		{
			d.removeAddress();
		}
		else if(input == 'F')
		{
			t= d.getName();
			cout <<	"Name: " << t << endl;
		}
		else if(input == 'Q')
		{
			d.changePassword();
		}
		else if(input == 'C')
		{
			d.changePoints();
		}
		else if(input == 'V')
		{		
			t2 = d.getAddress();
			i = d.getNumAddress();
			for(int o = 0; o < i; o++)
			{
				cout << "Address " << o << ": " << t2[o] << endl;
			}
		}
		else if(input == 'N')
		{
				cin >> t;
				d.setUsername(t);
		}
		d.saveDriver();
	}
}
