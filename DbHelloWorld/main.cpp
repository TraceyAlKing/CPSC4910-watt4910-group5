#include <mysql_connection.h>
#include <mysql_driver.h>

#include <cppconn/driver.h>
#include <cppconn/exception.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <stdlib.h>
#include <iostream>

//https://buffet.cs.clemson.edu/sqldb/u/tracey/CPSC4910-watt-group5/

int main(){
  try {
    sql::Driver *driver;
    sql::Connection *con;
    sql::Statement *stmt;
    sql::ResultSet *res;
    sql::ConnectOptionsMap connection_properties;

    connection_properties["hostName"] = "tcp://mysql1.cs.clemson.edu";
    connection_properties["userName"] = "ufv6yuc8";
    connection_properties["password"] = "jtisctbtw123";
    connection_properties["schema"] = "CPSC4910-watt-group5_wp20";
    connection_properties["port"] = 3306;
    connection_properties["OPT_RECONNECT"] = true;

    /* Create a connection */
    driver = get_driver_instance();
    con = driver->connect(connection_properties);
    if(con == NULL)
      return 1;
    std::cout << "Hi MySQL. Are you there?" << std::endl;

    stmt = con->createStatement();
    res = stmt->executeQuery("SELECT 'Hello World!' AS _message");
    while (res->next()) {
      std::cout << "\t... MySQL replies: ";
      /* Access column data by alias or column name */
      std::cout << res->getString("_message") << std::endl;
      std::cout << "\t... MySQL says it again: ";
      /* Access column data by numeric offset, 1 is the first column */
      std::cout << res->getString(1) << std::endl;
    }
    delete res;
    delete stmt;
    delete con;


  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
      << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return 0;
}