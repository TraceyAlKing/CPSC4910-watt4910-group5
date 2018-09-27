#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

class Request {
public:
	Request();
	Request(std::string);
	std::string getRequest();
	void addTimestamp();
	void addOperation(std::string);
	void addKeywords(std::string);
	void addSearchIndex(std::string);
	void addSignature();


private:
std::string url;

};

	
