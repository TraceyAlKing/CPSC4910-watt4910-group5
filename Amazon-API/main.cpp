#include <iostream>
#include <string>
#include <fstream>
#include "Catalog.hpp"




int main(void)
{
	std::ofstream outfile;
	std::string readBuffer;
	outfile.open("request.txt");
	
	Catalog request;

	/*
	request.setRequest("base.txt");
	request.addOperation("ItemSearch");
	request.addKeywords("the%20hunger%20games");
	request.addSearchIndex("Books");
	request.addTimestamp();
	
	request.addSignature();
	*/
	request.browsenodeRequest("test",true);
	
	outfile << request.getRequest();
	outfile.close();
	outfile.open("response.txt");

	readBuffer=request.makeRequest();

	outfile << readBuffer << std::endl;

	outfile.close();
}
