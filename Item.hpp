#ifndef ITEM_HPP
#define ITEM_HPP

#include <vector>
#include <string>

class Item{

public:
	Item(int, std::string, long double, std::string, std::string);



private:

	std::vector<std::string> images;
	int Catalogid;
	int Itemid;
	std::string name;
	long double price;
	std::string description;
	std::string url;


};
#endif //ITEM_HPP