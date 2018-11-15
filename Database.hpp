#ifndef DATABASE_HPP
#define DATABASE_HPP

#include <mysql_connection.h>
#include <mysql_driver.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
#include "Item.hpp"
#include "Driver.hpp"
#include "Sponsor.hpp"
#include "Admin.hpp"
#include "Catalog.hpp"

class Database{
public:
   static Database& getInstance();
   //always call init first
   void init();

   std::string executeStatement();

   //Driver calls
   void createDriver(std::string name, std::string email, std::string password, std::string phone, std::string points);
   Driver* getDriver(std::string id);
   void removeDriver(std::string id);
   void getDrivers(std::map<int, Driver*>* add_to_driver_list);
   void updateDriver(std::string id, std::string name, std::string email, std::string password, std::string phone);
   int getPoints(int d_id, std::map<int,int> &pointmap);
   void updatePoints(int d_id, std::map<int,int> &pointmap);

   
   //Sponsor calls
   void createSponsor(std::string name, std::string email, std::string password, std::string phone, std::string point_value);
   Sponsor* getSponsor(std::string id);
   void removeSponsor(std::string id);
   void getSponsors(std::map<int, Sponsor*>* add_to_sponsor_list);
   void updateSponsor(std::string id, std::string name, std::string email, std::string password, std::string phone, std::string point_value);

   //Admin calls
   void createAdmin(std::string name, std::string email, std::string password, std::string phone);
   Admin* getAdmin(std::string id);
   void removeAdmin(std::string id);
   void getAdmins(std::map<int, Admin*>* add_to_admin_list);
   void updateAdmin(std::string id, std::string name, std::string email, std::string password, std::string phone);

   //Amazon Item calls
   void createAmazonItem(std::string name, std::string price, std::string description, std::string url);
   Item* getAmazonItem(std::string id);
   std::vector<int> getCatalogItems(std::string id);
   void removeAmazonItem(std::string id);
   void getAmazonItems();
   int getImages(int item_id, std::vector<std::string> &images);

   //Catalog Calls
   void createCatalog(std::string my_sponsor_id);
   Catalog* getCatalog(std::string id);
   void removeCatalog(std::string id);
   void getCatalogs();
   void updateCatalog(int cat_id, std::vector<int> &items);

   //DON'T USE THIS ONE, this function is here for testing purposes
   std::string executeUnguardedStatement(std::string str);

   //Misc Functions
   
   //returns 0 on failure, if greater than 0, then it's a success
   //    returns 1 if driver, 2 if sponsor, 3 if admin
   User* login(std::string input_email, std::string input_password);  
private:
   Database();
   ~Database();
   Database(Database& other) = delete;
   Database& operator=(Database& rhs) = delete;

   std::stringstream statement_;
   sql::Driver *driver_;
   sql::Connection *con_;
   sql::Statement *stmt_;
   sql::ResultSet *res_;
   sql::ConnectOptionsMap connection_properties_;
};

Database& db();

#endif //DATABASE_HPP
