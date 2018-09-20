#include <mysqlx/xdevapi.h>
#include <iostream>

//https://buffet.cs.clemson.edu/sqldb/u/tracey/CPSC4910-watt-group5/

int main(){
  // Connect to server using a connection URL
  //mysqlx::Session mySession("mysql1.cs.clemson.edu/CPSC4910-watt-group5_wp20", 33060, "ufv6yuc8", "CPSC4910-watt-group5_wp20");

  //std::string usr = prompt("Username:");
  //std::string pwd = prompt("Password:");

  mysqlx::Session mySession(mysqlx::SessionOption::HOST, "mysql://mysql1.cs.clemson.edu",
                            mysqlx::SessionOption::PORT, 33060,
                            mysqlx::SessionOption::USER, "ufv6yuc8",
                            mysqlx::SessionOption::PWD, "jtisctbtw",
                            mysqlx::SessionOption::DB, "CPSC4910-watt-group5_wp20");


  mysqlx::Schema myDb = mySession.getSchema("schema.sql");

  // Accessing an existing table
  mysqlx::Table myTable = myDb.getTable("DRIVER");

  // Insert SQL Table data
  myTable.insert("name", "email", "phone", "points", "password")
          .values("Jimmy Jean", "jimmyjeanbeandean@beans.edu", "1864189209", "password123").execute();

  // Find a row in the SQL Table
  mysqlx::RowResult myResult = myTable.select("id", "name", "email", "phone", "points", "my_sponsor_id", "password")
     .where("name like :name")
     .bind("name", "S%").execute();

  // Print result
  mysqlx::Row row = myResult.fetchOne();
  std::cout << "             id: " << row[0] << std::endl;
  std::cout << "           name: " << row[1] << std::endl;
  std::cout << "          email: " << row[2] << std::endl;
  std::cout << "          phone: " << row[3] << std::endl;
  std::cout << "         points: " << row[4] << std::endl;
  std::cout << "  my_sponsor_id: " << row[5] << std::endl;
  std::cout << "       password: " << row[6] << std::endl;

  mySession.close();

  return 0;
}