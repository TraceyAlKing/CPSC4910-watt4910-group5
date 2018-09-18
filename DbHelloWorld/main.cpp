#include <mysqlx/xdevapi.h>

int main(){

   // Connect to server using a connection URL
   Session mySession(33060, "user", "password");

   Schema myDb = mySession.getSchema("schema.sql");

   // Accessing an existing table
   Table myTable = myDb.getTable("DRIVER");

   // Insert SQL Table data
   myTable.insert("name", "birthday", "age")
          .values("Sakila", "2000-5-27", 16).execute();

   // Find a row in the SQL Table
   RowResult myResult = myTable.select("_id", "name", "birthday")
     .where("name like :name AND age < :age")
     .bind("name", "S%").bind("age", 20).execute();

   // Print result
   Row row = myResult.fetchOne();
   cout << "     _id: " << row[0] << endl;
   cout << "    name: " << row[1] << endl;
   cout << "birthday: " << row[2] << endl;


   return 0;
}