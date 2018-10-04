#include "Admin.hpp"

using namespace std;

Admin d;

int main(int argc, char *argv[])
{
	char regL;
	cout << "Register (R) or Load (L)?" << endl;
	bool add = false;
	string addr[10];
	int addrNum = 0;

	cin >> regL;

	if(regL == 'R')
	{
		d.registerAdmin();

		cout << endl;

		cout << "User registered." << endl;

		cout << endl;

		d.saveAdmin();
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
			if(typeOfUser == "Admin")
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
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(str == "ADDRESS")
				{
					add = true;
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
	
	d.viewUser();
	
}
}
