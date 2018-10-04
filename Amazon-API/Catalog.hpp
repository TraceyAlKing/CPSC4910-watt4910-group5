#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
#include <vector>
#include <map>
#include <curl/curl.h>

class Catalog {
public:
	Catalog();
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


private:
std::string url;

static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp);

};

	
