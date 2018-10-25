#include "Catalog.hpp"
#include "Item.hpp"
#include "Database.hpp"

Catalog::Catalog(int cid, int sid) : 
	CatItems(),
	Catalogid(cid),
	Sponsorid(sid)
	{
		populate();
	}
	
Catalog::~Catalog(){

}


std::vector<Item*> Catalog::getItems(){
	return CatItems;
}
std::vector<Item*> Catalog::getAvailableItems(){
	std::vector<Item*> ritems;
	for(Item* item : CatItems){
			if(item->availability) ritems.push_back(item);
	}
	return ritems;
}

std::vector<Item*> Catalog::getitemsbypriceabove(double price){
	std::vector<Item*> ritems;
	for(Item* item : CatItems){
			if(item->price>price) ritems.push_back (item);
	}
	return ritems;
}
std::vector<Item*> Catalog::getitemsbypricebelow(double price){
	std::vector<Item*> ritems;
	for(Item* item : CatItems){
			if(item->price<price) ritems.push_back (item);
	}
	return ritems;
}
std::vector<Item*> Catalog::getitemsbyname(std::string name){
	std::vector<Item*> ritems;
	for(Item* item : CatItems){
			if(item->name.find(name)!=std::string::npos) ritems.push_back (item);
	}
	return ritems;
}



void Catalog::setRequest(std::string fname){
	std::ifstream infile;
	infile.open(fname.c_str());

	getline(infile,url);
	infile.close();
	
}

void Catalog::clearRequest(){
	url="";
}

std::string Catalog::getRequest(){
	return url;
}

void Catalog::addTimestamp(){

	time_t now;
	time (&now);
	char buf[sizeof "2011-10-08T07:07:09Z"];
	strftime(buf, sizeof buf, "%FT%TZ", gmtime(&now));

	url+="&Timestamp=";
	url+=buf;

}

void Catalog::addOperation(std::string op){
	url+="&Operation=";
	url+=op;
	
}

void Catalog::addKeywords(std::vector<std::string> kw){
	std::string words="";
	for(auto it : kw){
		words+=it;
		words+="%20";
	}
	addKeywords(words);
}

void Catalog::addKeywords(std::string kw){
	url+="&Keywords=";
	url+=kw;
}

void Catalog::addSearchIndex(std::string si){
	url+="&SearchIndex=";
	url+=si;
}

void Catalog::addSignature(){
	url+="&Signature=IDK";
}

std::string Catalog::browsenodeRequest(std::string node, bool newreleases){
	setRequest("base.txt");
	url+="&Operation=BrowseNodeLookup&BrowseNodeId=";
	url+="163357";
	if(newreleases) url+="&ResponseGroup=NewReleases";
	addTimestamp();
	addSignature();
	return url;
}

std::string Catalog::itemlookupRequest(std::string itemid){
	setRequest("base.txt");
	url+="&Operation=ItemLookup&ItemID=";
	url+=itemid;
	addTimestamp();
	addSignature();
	return url;
}

std::string Catalog::similarityRequest(std::vector<std::string> items){
	setRequest("base.txt");
	url+="Operation=SimilarityLookup&ItemId=";
	for(auto it : items){
		url+=it;
		url+=",";
	}
	addTimestamp();
	addSignature();
	return url;

}

size_t Catalog::WriteCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
	((std::string*)userp)->append((char*)contents, size * nmemb);
	return size * nmemb;
}

std::string Catalog::makeRequest()
{
	//@TODO: remove curl functions?
	//CURL *curl;
	//CURLcode res;
	std::string readBuffer;

	
	/*curl = curl_easy_init();
	if(curl) {
		curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
		curl_easy_setopt(curl, CURLOPT_HTTPGET,1);
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);
	}*/
	return readBuffer;

}


void Catalog::populate(){
	std::vector<int> itemids=getCatalogItems(std::to_string(Catalogid));
	for( int i : itemids){
		CatItems.push_back(getAmazonItem(std::to_string(i)));
	}
}


