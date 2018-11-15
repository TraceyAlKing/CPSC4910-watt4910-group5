#ifndef DATABASEINTERFACE_HPP
#define DATABASEINTERFACE_HPP

#include "Database.hpp"
#include <map>

//DatabaseInterface is used to store local instances of data obtained
// from the database. In essense you will ask the interface for data,
// and if it doesn't have the data it will query the database for the
// object type it needs by using the unique id

class DatabaseInterface {
public:
   DatabaseInterface();
   ~DatabaseInterface();

   Driver* getDriver(int id);
   Admin* getAdmin(int id);
   Sponsor* getSponsor(int id);
   Catalog* getCatalog(int id);
   Item* getItem(int id);

   void update(Driver* obj);
   void update(Admin* obj);
   void update(Sponsor* obj);
   void update(Catalog* obj);
   void update(Item* obj);

   //Search functions

   bool findDriver(int id);
   bool findAdmin(int id);
   bool findSponsor(int id);
   bool findUser(int id);

   bool findUsername(int id, std::string name);
   bool findEmail(int id, std::string name);

private:
   //HOW WE WILL HANDLE DATA: IMPORTANT
   //
   //How maps work:
   // std::map<how_you_index_the_data, the_data_type_you_want> name;
   // the int in this case refers to the ID of the object
   //
   //Use these data structures to store what you need for the program
   //
   //Ensure you always delete the objects after you no longer need them
   //
   //Esentially Drivers and Sponsors will store an int of their respective
   //  Sponsors and Drivers. This will be indexed from the list of Drivers
   //  and Sponsors.
   //example:
   //  int id = (static_cast<Driver*>CurrUser)->getSponsor();
   //  Sponsor* mySponsor = sponsor_list_[id]);
   //
   std::map<int, Driver*> driver_list_;
   std::map<int, Admin*> admin_list_;
   std::map<int, Sponsor*> sponsor_list_;
   std::map<int, Catalog*> catalog_list_;
   std::map<int, Item*> item_list_;

};

#endif //DATABASEINTERFACE_HPP
