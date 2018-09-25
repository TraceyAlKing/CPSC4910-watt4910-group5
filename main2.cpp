#include "Driver.hpp"

using namespace std;

Driver d;

int main(int argc, char *argv[])
{
	char regL;
	cout << "Register (R) or Load (L)?" << endl;

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

		int i = 0;

		while(getline(in, str))
		{
			if(i == 0)
			{
				d.setUsername(str);
			}
			if(i == 1)
			{
				d.setPassword(str);
			}
			if(i == 2)
			{
				d.setEmail(str);
			}
			if(i == 3)
			{
				d.setPhone(str);
			}
			if(i == 4)
			{
				d.setID(str);
			}
			if(i == 5)
			{
				d.setSponsor(str);
			}
			if(i == 6)
			{
				d.setPoints(str);
			}
			i++;
		}

		cout << endl;
		cout << "User " << buff << " loaded" << endl;
		cout << endl;

		in.close();
	}

	string t;
	char input;
	int i;
	long l;
	int x = 0;

	cout << "Choose action:" << endl;

	cout << "View Username (U)" << endl;
	cout << "View Password (P)" << endl;
	cout << "View Email (E)" << endl;
	cout << "View Phone (H)" << endl;
	cout << "View ID (I)" << endl;
	cout << "View Sponsor (S)" << endl;
	cout << "View Points (O)" << endl;
	cout << "Change Points (C)" << endl;

	while(x == 0)
	{
		cin >> input;

		if(input == 'U')
		{		
			t = d.getUsername();
			cout <<	"Username: " << t << endl;
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
		else if(input = 'C')
		{
			d.changePoints();
		}
		else
		{
			cout << "Invalid input..." << endl;
		}
		d.saveDriver();
	}
}
