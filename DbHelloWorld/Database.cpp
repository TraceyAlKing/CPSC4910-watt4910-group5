#include "Database.hpp"

Database& Database::getInstance(){
   static Database singleton;
   return singleton;
}
void Database::init(){
   try {
      /* Create a connection */
      driver_ = get_driver_instance();
      con_ = driver_->connect(connection_properties_);
      if(con_ == NULL)
         throw std::exception();
      std::cout << "Connecting to database..." << std::endl;

      stmt_ = con_->createStatement();
      res_ = stmt_->executeQuery("SELECT 'Connection created.' AS _message");
      while (res_->next()) {
         std::cout << "\t... MySQL replies: ";
         /* Access column data by alias or column name */
         std::cout << res_->getString("_message") << std::endl;
      }
  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
      << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
void Database::removeDriver(std::string id){
  try {
    //DELETE FROM somelog WHERE user = 'jcole'
    std::stringstream sstr;
    sstr << "DELETE FROM DRIVER WHERE id = \'";
    sstr << id << "\';";

    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
void Database::createDriver(std::string name, std::string email, std::string password, 
    std::string phone, std::string points){
  try {

    std::stringstream sstr;
    sstr << "INSERT INTO DRIVER ( name, email, password, phone, points ) ";
    sstr << "VALUES ( \"" << name << "\", \"" << email << "\", \"";
    sstr << password << "\", \""<< phone << "\", \""<< points << "\" );";

    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
void Database::getDrivers(){
     try {
      std::string str = "SELECT * FROM DRIVER;";
      std::cout << "Attempting statement: " << str << std::endl;
      stmt_ = con_->createStatement();
      res_ = stmt_->executeQuery(str);
      std::cout << "\t... MySQL replies: " << std::endl;
      int count = 0;
      while (res_->next()) {
        /* Access column data by alias or column name */
        std::cout << "\t-------------------------------------------" << std::endl;
        std::cout << "\tid: "<< res_->getString("id") << std::endl;
        std::cout << "\tname: "<< res_->getString("name") << std::endl;
        std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
        std::cout << "\temail: "<< res_->getString("email") << std::endl;
        std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
        std::cout << "\tpoints: "<< res_->getString("points") << std::endl;
        std::cout << "\tsponsor: "<< res_->getString("my_sponsor_id") << std::endl;
        count++;
      }
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tNumber of entries: " << count << std::endl;

      std::cout << "\t... MySQL replies: Success." << std::endl;;
   } catch (sql::SQLException &e) {
      std::cout << "# ERR: SQLException in " << __FILE__;
      std::cout << "(" << __FUNCTION__ << ") on line "
         << __LINE__ << std::endl;
      std::cout << "# ERR: " << e.what();
      std::cout << " (MySQL error code: " << e.getErrorCode();
      std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
   }
}

std::string Database::executeUnguardedStatement(std::string str){
   try {
      std::cout << "Attempting statement: " << str << std::endl;
      stmt_ = con_->createStatement();
      res_ = stmt_->executeQuery(str);
      std::cout << "\t... MySQL replies: ";
      while (res_->next()) {
         /* Access column data by alias or column name */
         //@TODO ADD CODE HERE TO PROCESS ANYTHING
         //
         //
      }
   } catch (sql::SQLException &e) {
      std::cout << "# ERR: SQLException in " << __FILE__;
      std::cout << "(" << __FUNCTION__ << ") on line "
         << __LINE__ << std::endl;
      std::cout << "# ERR: " << e.what();
      std::cout << " (MySQL error code: " << e.getErrorCode();
      std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;

      return "Error: SQLException";
   }
}

int Database::login(std::string email, std::string password){
  //returns 0 on failure, if greater than 0, then it's a success
  //    returns 1 if driver, 2 if sponsor, 3 if admin
  std::stringstream sstr;
  sstr << "SELECT email, password ";
  sstr << "FROM ADMIN";
  sstr << "WHERE email = \"" << email << "\" AND password = \"" << password << "\" ;";
  executeUnguardedStatement(sstr.str());
  return 0;
}

Database::Database() : statement_(""), driver_(NULL), con_(NULL), stmt_(NULL), res_(NULL){
   connection_properties_["hostName"] = "tcp://mysql1.cs.clemson.edu";
   connection_properties_["userName"] = "ufv6yuc8";
   connection_properties_["password"] = "jtisctbtw123";
   connection_properties_["schema"] = "CPSC4910-watt-group5_wp20";
   connection_properties_["port"] = 3306;
   connection_properties_["OPT_RECONNECT"] = true;
}

Database::~Database(){
   delete res_;
   delete stmt_;
   delete con_;
}

Database& db(){
   return Database::getInstance();
}