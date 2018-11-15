#ifndef ITEM_HPP
#define ITEM_HPP

#include <vector>
#include <string>

class Item{

public:
	Item(int, std::string, long double, std::string, std::string, int);

	int getimagenum();
	std::string getpath();
	std::string getpath(int i);
	std::vector<std::string> getpaths();

	int getCatalog();
	int getId();
	std::string getname();
	double getprice();
	std::string getdescription();
	std::string geturl();
	bool available();




private:

	std::vector<std::string> images;
	int imagenum;
	int Catalogid;
	int Itemid;
	std::string name;
	long double price;
	std::string description;
	std::string url;
	int availability;


friend class Catalog;


};
#endif //ITEM_HPP