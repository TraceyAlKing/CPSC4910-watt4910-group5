#include "DatabaseInterface.hpp"

DatabaseInterface::DatabaseInterface() : driver_list_(), admin_list_(), sponsor_list_(),
   catalog_list_(), item_list_()
{

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

Driver* DatabaseInterface::getDriver(int id){
   auto search = driver_list_.find(id);
   if(search == driver_list_.end()){
      Driver* new_driver = db().getDriver(std::to_string(id));
      if(!new_driver)   //not found
         return NULL;
      driver_list_.emplace(id, new_driver);
   }
   return driver_list_[id];
}
Admin* DatabaseInterface::getAdmin(int id){
   auto search = admin_list_.find(id);
   if(search == admin_list_.end()){
      Admin* new_admin = db().getAdmin(std::to_string(id));
      if(!new_admin)
         return NULL;
      admin_list_.emplace(id, new_admin);
   }
   return admin_list_[id];
}
Sponsor* DatabaseInterface::getSponsor(int id){
   auto search = sponsor_list_.find(id);
   if(search == sponsor_list_.end()){
      Sponsor* new_sponsor = db().getSponsor(std::to_string(id));
      if(!new_sponsor)
         return NULL;
      sponsor_list_.emplace(id, new_sponsor);
   }
   return sponsor_list_[id];
}
Catalog* DatabaseInterface::getCatalog(int id){
   auto search = catalog_list_.find(id);
   if(search == catalog_list_.end()){
      Catalog* new_catalog = db().getCatalog(std::to_string(id));
      if(!new_catalog)
         return NULL;
      catalog_list_.emplace(id, new_catalog);
   }
   return catalog_list_[id];
}
Item* DatabaseInterface::getItem(int id){
   auto search = item_list_.find(id);
   if(search == item_list_.end()){
      Item* new_item = db().getAmazonItem(std::to_string(id));
      if(!new_item)
         return NULL;
      item_list_.emplace(id, new_item);
   }
   return item_list_[id];
}

void DatabaseInterface::update(Driver* obj){
   std::string id = std::to_string(obj->getID());
   std::string name = obj->getName();
   std::string email = obj->getEmail();
   std::string password = obj->getPassword();
   std::string phone = std::to_string(obj->getPhone());

   db().updateDriver(id, name, email, password, phone);
}
void DatabaseInterface::update(Admin* obj){
   std::string id = std::to_string(obj->getID());
   std::string name = obj->getName();
   std::string email = obj->getEmail();
   std::string password = obj->getPassword();
   std::string phone = std::to_string(obj->getPhone());

   db().updateAdmin(id, name, email, password, phone);
}
void DatabaseInterface::update(Sponsor* obj){
   std::string id = std::to_string(obj->getID());
   std::string name = obj->getName();
   std::string email = obj->getEmail();
   std::string password = obj->getPassword();
   std::string phone = std::to_string(obj->getPhone());
   std::string point_value = std::to_string(obj->getPV());

   db().updateSponsor(id, name, email, password, phone, point_value);
}

bool DatabaseInterface::findAdmin(int id)
{
    auto search = admin_list_.find(id);
    if(search == admin_list_.end()){
       Admin* new_admin = db().getAdmin(std::to_string(id));
       if(!new_admin)
          return false;
    }
    return true;
}


bool DatabaseInterface::findDriver(int id)
{
    auto search = driver_list_.find(id);
    if(search == driver_list_.end()){
       Driver* new_driver = db().getDriver(std::to_string(id));
       if(!new_driver)   //not found
          return false;
    }
    return true;
}

bool DatabaseInterface::findSponsor(int id)
{
    auto search = sponsor_list_.find(id);
    if(search == sponsor_list_.end()){
       Sponsor* new_sponsor = db().getSponsor(std::to_string(id));
       if(!new_sponsor)
          return false;
    }
    return true;
}

bool DatabaseInterface::findUser(int id)
{
    if(findSponsor(id) == true){
        return true;
    }
    else if(findAdmin(id) == true)
    {
        return true;
    }
    else if(findDriver(id) == true)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DatabaseInterface::update(Catalog* obj){
   //@TODO: not yet implemented updateCatalog()
   //db().updateCatalog();

}
void DatabaseInterface::update(Item* obj){
   //@TODO: not yet implemented updateAmazonItem()
   //db().updateItem();
}
