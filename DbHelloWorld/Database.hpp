#include <mysql_connection.h>
#include <mysql_driver.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>


enum DB_TABLE{
   DRIVER = 0,
   SPONSOR = 1,
   ADMIN = 2,
   AMAZON_ITEM = 3,
   AMAZON_ITEM_IMAGE = 4,
   CATALOG = 5,
   CATALOG_AMAZON_ITEM = 6
};
enum DB_DRIVER{

};
enum DB_SPONSOR{

};

class Database{
public:
   static Database& getInstance();
   //always call init first
   void init();

   //Build your statement with these functions????
   void select();
   void where();
   void entity(DB_TABLE ent);

   std::string executeStatement();

   //Driver calls
   void createDriver(std::string name, std::string email, std::string password, std::string phone, std::string points);
   void removeDriver(std::string id);
   void getDrivers();
   
   //Sponsor calls
   void createSponsor();
   void getSponsor(int id);
   void getSponsors();

   //Admin calls
   void getAdmin(int id);

   //Amazon Item calls
   std::array<std::string, 4> getAmazonItem(int id);

   //Catalog Calls
   std::array<std::string, 4> getCatalog(int id);

   //DON'T USE THIS ONE, this function is here for testing purposes
   std::string executeUnguardedStatement(std::string str);

   //Misc Functions
   
   //returns 0 on failure, if greater than 0, then it's a success
   //    returns 1 if driver, 2 if sponsor, 3 if admin
   int login(std::string email, std::string password);  
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
