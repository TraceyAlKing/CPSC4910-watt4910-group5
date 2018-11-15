#ifndef CATALOG_HPP
#define CATALOG_HPP

#include <vector>
#include "Item.hpp"
#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <map>

class Catalog {
public:
	Catalog(int, int);
	~Catalog();

	void updateCatalog();

	//sorting methods;
	std::vector<Item*> getItems();
	std::vector<Item*> getAvailableItems();
	std::vector<Item*> getItemsbypriceabove(double price);
	std::vector<Item*> getItemsbypricebelow(double price);
	std::vector<Item*> getItemsbyname(std::string name);

	void addItem(int itemid);
	void removeItem(int itemid);

	//better sorting methods;

	void getAvailableItems(std::vector<Item*> &items);
	void getItemsbypriceabove(std::vector<Item*> &items, double price);
	void getItemsbypricebelow(std::vector<Item*> &items, double price);
	void getItemsbyname(std::vector<Item*> &items, std::string name);




	//all these functions handle api request to amazon product advertising api, so they are unused in the current version
	/*
	void setRequest(std::string);
	void clearRequest();
	std::string getRequest();
	std::string browsenodeRequest(std::string, bool);
	std::string itemlookupRequest(std::string);
	std::string similarityRequest(std::vector<std::string>);
	void addTimestamp();
	void addOperation(std::string);
	void addKeywords(std::vector<std::string>);
	void addKeywords(std::string);
	void addSearchIndex(std::string);
	void addSignature();
	std::string makeRequest();
	*/


private:

	std::string url;
	std::vector<Item*> CatItems;
	int Catalogid;
	int Sponsorid;


	//database calls;
	void populate();

//also used for api calls
//static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

};

#endif //CATALOG_HPP