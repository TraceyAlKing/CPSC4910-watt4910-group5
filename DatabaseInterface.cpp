#include "DatabaseInterface.hpp"

DatabaseInterface::DatabaseInterface() : driver_list_(), admin_list_(), sponsor_list_(),
   catalog_list_(), item_list_(){

}
DatabaseInterface::~DatabaseInterface(){
   for(std::map<int, Driver*>::iterator it = driver_list_.begin(); it != driver_list_.end(); it++)
      delete it->second;
   for(std::map<int, Admin*>::iterator it = admin_list_.begin(); it != admin_list_.end(); it++)
      delete it->second;
   for(std::map<int, Sponsor*>::iterator it = sponsor_list_.begin(); it != sponsor_list_.end(); it++)
      delete it->second;
   for(std::map<int, Catalog*>::iterator it = catalog_list_.begin(); it != catalog_list_.end(); it++)
      delete it->second;
   for(std::map<int, Item*>::iterator it = item_list_.begin(); it != item_list_.end(); it++)
      delete it->second;
   driver_list_.clear();
   admin_list_.clear();
   sponsor_list_.clear();
   catalog_list_.clear();
   item_list_.clear();
}

Driver* DatabaseInterface::get(int id){
   auto search = driver_list_.find(id);
   if(search != driver_list_.end()){
      driver_list_.emplace(id, db.getDriver(id));
   }
   return driver_list_[id];
}
Admin* DatabaseInterface::get(int id){

}
Sponsor* DatabaseInterface::get(int id){

}
Catalog* DatabaseInterface::get(int id){

}
Item* DatabaseInterface::get(int id){

}

void DatabaseInterface::update(Driver* obj){

}
void DatabaseInterface::update(Admin* obj){

}
void DatabaseInterface::update(Sponsor* obj){

}
void DatabaseInterface::update(Catalog* obj){

}
void DatabaseInterface::update(Item* obj){

}