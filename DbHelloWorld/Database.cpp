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

std::sstring Database::executeUnguardedStatement(std::string str){
   try {
      stmt_ = con_->createStatement();
      res_ = stmt_->executeQuery(str);
      std::cout << "\t... MySQL replies: ";
      while (res_->next()) {
         /* Access column data by alias or column name */

         //@TODO ADD CODE HERE
         //
         //
         std::cout << res_->getString("_message") << std::endl;
      }
   } catch (sql::SQLException &e) {
      std::cout << "# ERR: SQLException in " << __FILE__;
      std::cout << "(" << __FUNCTION__ << ") on line "
         << __LINE__ << std::endl;
      std::cout << "# ERR: " << e.what();
      std::cout << " (MySQL error code: " << e.getErrorCode();
      std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
      return "";
   }
}

int Database::login(std::string email, std::string password){
   std::sstring sstr = "";
   sstr << "SELECT email, password ";
   sstr << "FROM ADMIN";
   sstr << "WHERE email = \"" << email << "\" AND password = \"" << password << "\" ";
   sstr << ";";
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