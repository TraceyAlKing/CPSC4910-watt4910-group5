#include <vector>
#include "Item.hpp"

class Catalog{

public:
	Catalog(int, int);



private:

	std::vector<Item> AmazonItems;
	int Catalogid;
	int Sponsorid;

};