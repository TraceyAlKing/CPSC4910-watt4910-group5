#include "Request.hpp"

Request::Request(){
	url = "";
}

Request::Request(std::string fname){
	std::ifstream infile;
	infile.open(fname.c_str());

	getline(infile,url);
	infile.close();
	
}
std::string Request::getRequest(){
	return url;
}

void Request::addTimestamp(){

	time_t now;
	time (&now);
	char buf[sizeof "2011-10-08T07:07:09Z"];
	strftime(buf, sizeof buf, "%FT%TZ", gmtime(&now));

	url+="&Timestamp=";
	url+=buf;

}
void Request::addOperation(std::string op){
	url+="&Operation=";
	url+=op;
	
}
void Request::addKeywords(std::string kw){
	url+="&Keywords=";
	url+=kw;
}

void Request::addSearchIndex(std::string si){
	url+="&SearchIndex=";
	url+=si;
}

void Request::addSignature(){
	url+="&Signature=IDK";
}



