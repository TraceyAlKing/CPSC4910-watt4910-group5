#include <string.h>
#include <iostream>
#include <cstdlib>

#include "Driver.hpp"
#include "Database.hpp"

Driver::Driver(std::string id, std::string name, std::string email, std::string password,
                std::string phone, std::string address, std::string status) :
		User(id, name, email, password, phone, address), LNum_(), LPNum_(),
		//points_(std::stoi(points)), 
                LPNumNumber_(), status_()
{
	//sponsor_ = "";

	db().getPoints(getID(), points_map_);

}

Driver::Driver()
{
	//sponsor_ = "";
	//points_ = 0;
}
Driver::Driver(const Driver& other) : User(other), status_(other.status_) //points_(other.points_)
{

}
Driver& Driver::operator=(const Driver& rhs)
{
	if(this == &rhs)
		return *this;
	User::operator=(rhs);
	//points_ = rhs.points_;
    status_ = rhs.status_;
	return *this;
}

Driver::~Driver()
{
}

void Driver::registerDriver(string us, string ps, string nm, string em, long ph, string ad, int ln, string lp)
{
        registerUser(string us, string ps, string nm, string em, long ph, string ad);

	//cout << "Sponsor set to N/A" << endl;
	//sponsor = "N/A";
	
	sponsorNum_ = 0;

	//cout << "Points set to 0" << endl;
	pointNum_ = 0;
	
        //cout << "Enter License Number: ";
        LNum_ = ln;

        //cout << "Enter Liscence Plate Number: ";
        LPNum_[0] = lp;
	
	LPNumNumber_ = 1;

        status_ = "Active";
}

int* Driver::getPoints()
{
	return points_;
}

int Driver::getPoints(int sid){
	return points_map_[sid];
}

int Driver::allPoints(){
	int sum=0;
	std::cout << "Points for " << getName() << std::endl;
	for (auto it = points_map_.begin(); it != points_map_.end(); it++){
		cout << "Sponsor id: " << it->first << "\t points:" << it->second << std::endl;
		sum+=it->second;
	}
	return sum;
}

int Driver::getSponsorNum()
{
	return sponsorNum_;
}

int Driver::getPointNum()
{
	return pointNum_;
}

string* Driver::getSponsor()
{
	return sponsor_;
}

void Driver::saveDriver()
{
	ofstream myfile;
	int p = getID();
	string filename =  to_string(p);
	const char* file = filename.c_str();
	myfile.open(file);
	
	myfile << "Driver" << "\n";

	myfile << getUsername() << "\n";
	myfile << getPassword() << "\n";
	myfile << getName() << "\n";
	myfile << getEmail() << "\n";
	myfile << getPhone() << "\n";
	myfile << getLicenseNum() << "\n";
        myfile << getStatus() << "\n";
	
	myfile << "SPONS" << "\n";
	
	int n = getSponsorNum();
	string* sponsor = getSponsor();
	for(int p = 0; p < n; p++)
	{
		myfile << sponsor[p] << "\n";
	}
	
	myfile << "ENDSPONS" << "\n";
	
	myfile << "ALLPOINTS" << "\n";
	
	n = getPointNum();
	int* points = getPoints();
	for(int p = 0; p < n; p++)
	{
		myfile << points[p] << "\n";
	}
	
	myfile << "ENDPTS" << "\n";
	
	myfile << "ADDRESS" << "\n";
	
	n = getNumAddress();
	string* addresses = getAddress();
	for(int p = 0; p < n; p++)
	{
		myfile << addresses[p] << "\n";
	}
	
		myfile << "ENDADDRESS" << "\n";
		
		myfile << "PLATES" << "\n";
		n = getLNumNum();
		int* plates = getPlates();
		for(int p = 0; p < n; p++)
		{
			myfile << LPNum_[p] << "\n";
		}
		
		myfile << "ENDPLATES" << "\n";
		
}

void Driver::updateDriver(){

	//no points as they no worky
	db().updateDriver(std::to_string(getID()), getName(), getEmail(), getPassword(), std::to_string(getPhone()));
	db().updatePoints(getID(), points_map_);
}

int Driver::getLicenseNum() 
{
	return LNum_;
}

int Driver::getLNumNum()
{
	return LPNumNumber_;
}

void Driver::updateLNum(int l)
{
        LNum_ = i;
}

int* Driver::getPlates()
{
	return LPNum_;
}

void Driver::setLNum(int i)
{
	LNum_ = i;
}

void Driver::setLPNum(string* i, int j)
{
	LPNumNumber_ = j;
	for(int k = 0; k < j; k++)
	{
		LPNum_[k]  = atoi(i[k].c_str());
	}
}

void Driver::setSponsors(string* i, int j)
{
	sponsorNum_ = j;
	for(int k = 0; k < j; k++)
	{
		sponsor_[k]  = i[k];
	}
}

void Driver::setPoints2(string* i, int j)
{
	pointNum_ = j;
	for(int k = 0; k < j; k++)
	{
		points_[k]  = atoi(i[k].c_str());
	}
}

void Driver::addLP(int i)
{
        if(LPNumNumber_ < 10)
        {
                LPNum_[LPNumNumber_] = i;
		LPNumNumber_++;
	}
}

void Driver::removeLP(int i)
{
        if(input > 0 && input < LPNumNumber_)
        {
            while(input < LPNumNumber_)
            {
                   LPNum_[input] = LPNum_[input+1];
                input++;
            }
        }
	LPNum_[LPNumNumber_] = 0;
	LPNumNumber_--;
}

int* Driver::viewLP()
{
        return LPNum_;
}

Driver Driver::setDriver(string f)
{
	bool add = false;
	bool plt = false;
	bool spo = false;
	bool pts = false;
	
	string addr[10];
	int addrNum = 0;
 	string plts[10];
	int pltNum = 0;
	string sponso[20];
	int sNum = 0;
 	string poin[20];
	int pNum = 0;
	
		const char *buff = f.c_str();

		ifstream in(buff);
		
		Driver d;

		string str;
		string typeOfUser;
		
		d.setID(f);

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
					d.setLNum(atoi(str.c_str()));
				}
                                if(i == 7)
                                {
                                        d.setStatus(str);
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
				if(str == "ENDSPONS")
				{
					spo = false;
					d.setSponsors(sponso,sNum);
				}
				if(str == "ENDPTS")
				{
					pts = false;
					d.setPoints2(poin,pNum);
				}
				if(add == true)
				{
					addr[addrNum] = str;
					addrNum++;
				}
				if(pts == true)
				{
					poin[pNum] = str;
					pNum++;
				}
				if(spo == true)
				{
					sponso[sNum] = str;
					sNum++;
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
				if(str == "SPONS")
				{
					spo = true;
				}
				if(str == "ALLPOINTS")
				{
					pts = true;
				}
			}
			i++;
		}
		return d;
}

int Driver::findSponsor(string i)
{
	for(int p = 0; p < sponsorNum_; p++)
	{
		if(i == sponsor_[p])
		{
			return p;
		}
	}
	return -1;
}

void Driver::setPointsFromSponsor(string i, int u)
{
	int f;
	int n = findSponsor(i);
	if(n != -1)
	{
            points_[n] = points_[n] + u;
	}
}

void Driver::addSponsor(string i)
{
	sponsor_[sponsorNum_] = i;
	sponsorNum_++;
	points_[pointNum_] = 0;
	pointNum_++;
}

void Driver::removeSponsor(string i)
{
		int n = findSponsor(i);
		if(n != -1)
		{
			for(int p = n; n < sponsorNum_-1; p++)
			{
				sponsor_[p] = sponsor_[p+1];
			}
			sponsor_[sponsorNum_] = "NULL";
			sponsorNum_--;
			points_[pointNum_] = 0;
			pointNum_--;
		}
}

void Driver::switchStatus()
{
    if(status_ == "Active")
    {
        status_ = "Inactive";
    }
    if(status_ == "Inactive")
    {
        status_ = "Active";
    }
}

void Driver::setStatus(string i)
{
    status_ = i;
}

string Driver::getStatus()
{
    return status_;
}

