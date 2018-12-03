#include <string.h>
#include <iostream>
#include <cstdlib>

#include "Driver.hpp"
#include "Database.hpp"

Driver::Driver(std::string id, std::string name, std::string email, std::string password,
                std::string phone, std::string address, std::string status, std::string license_num, 
                std::string license_plate_num) :
        User(id, name, email, password, phone, address), LNum_(std::stoi(license_num)), LPNum_(),
                LPNumNumber_(1), status_()
{
   LPNum_[0] = std::stoi(license_plate_num);
	db().getPoints(getID(), points_map_);
	db().getDriverSponsors(getID(), sponsor_vec_);
}

Driver::Driver()
{
	//points_ = 0;
}
Driver::Driver(const Driver& other) : User(other), LNum_(other.LNum_), LPNumNumber_(other.LPNumNumber_), status_(other.status_)
{
	LPNum_[0] = other.LPNum_[0]; 

	for(auto it : other.points_map_)
		points_map_.insert(make_pair(it.first, it.second));
	for(auto it : other.sponsor_vec_)
		sponsor_vec_.emplace_back(it);
	
}
Driver& Driver::operator=(const Driver& rhs)
{
	if(this == &rhs)
		return *this;
	User::operator=(rhs);
	//points_ = rhs.points_;
   status_ = rhs.status_;
   LNum_ = rhs.LNum_;
   LPNum_[0] = rhs.LPNum_[0];
   LPNumNumber_ = rhs.LPNumNumber_;

   for(auto it : rhs.points_map_)
		points_map_.insert(make_pair(it.first, it.second));
	for(auto it : rhs.sponsor_vec_)
		sponsor_vec_.emplace_back(it);

	return *this;
}

Driver::~Driver()
{
}

void Driver::registerDriver(string us, string ps, string nm, string em, long ph, string ad, int ln, string lp)
{
    registerUser(us, ps, nm, em, ph, ad);

	//cout << "Sponsor set to N/A" << endl;
	//sponsor = "N/A";
	

	//cout << "Points set to 0" << endl;
	
        //cout << "Enter License Number: ";
        LNum_ = ln;

        //cout << "Enter Liscence Plate Number: ";
        LPNum_[0] = std::stoi(lp);
	
	LPNumNumber_ = 1;

        status_ = "Active";
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

void Driver::getSponsors(std::vector<int>& sponsors)
{
	for(auto it : sponsor_vec_)
		sponsors.push_back(it);
}
/*
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
	
	
	string* sponsor = getSponsor();
	for(int p = 0; p < n; p++)
	{
		myfile << sponsor_vec_[p] << "\n";
	}
	


	myfile << "ENDSPONS" << "\n";
	
	myfile << "ALLPOINTS" << "\n";
	
	
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
*/

void Driver::updateDriver(){

	//no points as they no worky
   db().updateDriver(std::to_string(getID()), getName(), getEmail(), getPassword(), 
   	std::to_string(getPhone()), getAddress(), std::to_string(LNum_), std::to_string(LPNum_[0]));
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
        LNum_ = l;
}

int* Driver::getPlates()
{
	return LPNum_;
}

int Driver::getFirstPlate(){
	return LPNum_[0];
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
        if(i > 0 && i < LPNumNumber_)
        {
            while(i < LPNumNumber_)
            {
                   LPNum_[i] = LPNum_[i+1];
                i++;
            }
        }
	LPNum_[LPNumNumber_] = 0;
	LPNumNumber_--;
}

int* Driver::viewLP()
{
        return LPNum_;
}
/*
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
					//d.setPoints2(poin,pNum);
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
*/

void Driver::setPointsFromSponsor(int id, int points)
{
	bool found = false;
	for(auto it : sponsor_vec_){
		if (it == id)
			found = true;
	}
	if(found)
		points_map_[id] = points;
}

void Driver::addSponsor(int i)
{
	bool found = false;
	for(auto it : sponsor_vec_){
		if(i == it)
			found = true;
	}
	if(!found)
		sponsor_vec_.push_back(i);
}

void Driver::removeSponsor(int id)
{
	auto it = std::find(sponsor_vec_.begin(), sponsor_vec_.end(), id);
	if(it != sponsor_vec_.end())
     sponsor_vec_.erase(it);
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

