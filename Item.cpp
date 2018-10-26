#include "Item.hpp"

Item::Item(int cid, std::string na, long double pri, std::string des, std::string iurl, int avail) : 
	images(),
	Itemid(cid),
	name(na),
	price(pri),
	description(des),
	url(iurl),
	availability(avail)

	{}
