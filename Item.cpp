#include "Item.hpp"
#include "Database.hpp"

Item::Item(int iid, std::string na, long double pri, std::string des, std::string iurl, int avail) : 
	images(),
	Itemid(iid),
	name(na),
	price(pri),
	description(des),
	url(iurl),
	availability(avail)

	{
		imagenum=db().getImages(Itemid, images);
	}



int Item::getimagenum(){
	return imagenum;
}

std::string Item::getpath(){
	return images[0];
}
std::string Item::getpath(int i){
	return images[i];
}
std::vector<std::string> Item::getpaths(){
	return images;
}

int Item::getCatalog(){
	return Catalogid;
}
int Item::getId(){
	return Itemid;
}
std::string Item::getname(){
	return name;
}
double Item::getprice(){
	return price;
}
std::string Item::getdescription(){
	return description;
}
std::string Item::geturl(){
	return url;
}
bool Item::available(){
	return availability;
}
