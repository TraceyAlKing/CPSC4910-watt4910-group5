#include <mysql_connection.h>
#include <mysql_driver.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <stdlib.h>
#include <iostream>
#include <sstring>


enum DB_TABLE{
   DRIVER = 0,
   SPONSOR = 1,
   ADMIN = 2,
   AMAZON_ITEM = 3,
   AMAZON_ITEM_IMAGE = 4,
   CATALOG = 5,
   CATALOG_AMAZON_ITEM = 6
}
enum DB_DRIVER{

}
enum DB_SPONSOR{

}

//To use the database: 
// Option 1:
//    1. call db() or Database::getInstance() to get the database
//    2. build your statement with the section below
//    3. call executeStatement();
//    example:
//       db().select();
//       db().entity(DB_TABLE::DRIVER);
//       db().executeStatement();
// Option 2: 
//    1. call db() or Database::getInstance() to get the database
//    2. call one of the easy getter calls
//    example:
//       db().getDriver(1);
class Database{
public:
   static Database& getInstance();
   //always call init first
   void init();

   //Build your statement with these functions
   void select();
   void where();
   void entity(DB_TABLE ent);

   std::sstring executeStatement();

   //Section 2: Easy get calls
   std::array<std::string> getDriver(int id);
   std::array<std::string> getSponsor(int id);
   std::array<std::string> getAdmin(int id);
   std::array<std::string> getAmazonItem(int id);
   std::array<std::string> getCatalog(int id);

   //DON'T USE THIS ONE, this function is here for testing purposes
   std::sstring executeUnguardedStatement(std::string str);

   //Misc Functions
   
   //returns 0 on failure, if greater than 0, then it's a success
   //    returns 1 if driver, 2 if sponsor, 3 if admin
   int login(std::string email, std::string password);  
private:
   Database();
   ~Database();
   Database(Database& other) = delete;
   Database& operator=(Database& rhs) = delete;

   std::sstring statement_;
   sql::Driver *driver_;
   sql::Connection *con_;
   sql::Statement *stmt_;
   sql::ResultSet *res_;
   sql::ConnectOptionsMap connection_properties_;
};

Database& db();
