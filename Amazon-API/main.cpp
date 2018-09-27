#include <iostream>
#include <string>
#include <fstream>
#include <curl/curl.h>
#include <ctime>
#include "Request.hpp"


static size_t WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

int main(void)
{
	CURL *curl;
	CURLcode res;
	std::string readBuffer;

	std::ofstream outfile;
	outfile.open("request.txt");
	
	Request request("base.txt");

	request.addOperation("ItemSearch");
	request.addKeywords("the%20hunger%20games");
	request.addSearchIndex("Books");
	request.addTimestamp();
	
	request.addSignature();
	
	
	outfile << request.getRequest();
	outfile.close();
	outfile.open("response.txt");
	
	curl = curl_easy_init();
	if(curl) {
		curl_easy_setopt(curl, CURLOPT_URL, request.getRequest().c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);

		outfile << readBuffer << std::endl;
	}
	outfile.close();
	return 0;
}
