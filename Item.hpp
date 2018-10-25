#ifndef ITEM_HPP
#define ITEM_HPP

#include <vector>
#include <string>

class Item{

public:
	Item(int, std::string, long double, std::string, std::string, int);



private:

	std::vector<std::string> images;
	int Catalogid;
	int Itemid;
	std::string name;
	long double price;
	std::string description;
	std::string url;
	bool availability;


friend class Catalog;


};
#endif //ITEM_HPP