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
    //Build statement
    std::stringstream sstr;
    sstr << "DELETE FROM DRIVER WHERE id = \'";
    sstr << id << "\';";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

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
    //Build statement
    std::stringstream sstr;
    sstr << "INSERT INTO DRIVER ( name, email, password, phone, points ) ";
    sstr << "VALUES ( \"" << name << "\", \"" << email << "\", \"";
    sstr << password << "\", \""<< phone << "\", \""<< points << "\" );";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
vector<Driver*> Database::getDrivers(){
  try {
  //Build statement
  std::stringstream sstr;
  sstr << "SELECT * FROM DRIVER;";
  std::cout << "Attempting statement: " << sstr.str() << std::endl;

  //Execute statement
  stmt_ = con_->createStatement();
  res_ = stmt_->executeQuery(sstr.str());
  std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    std::vector<Driver*> return_drivers;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    std::string points;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      std::cout << "\tpoints: "<< res_->getString("points") << std::endl;
      points = res_->getString("points");
      count++;
      return_drivers.emplace_back(new Driver(id, name, email, password, phone, address, points, "Available"));
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    std::cout << "\tNumber of entries: " << count << std::endl;
    std::cout << "\t... MySQL replies: Success." << std::endl;
    return return_drivers;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    return std::vector<Driver*>();
  }
}

Driver* Database::getDriver(std::string id){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM DRIVER WHERE id = " << "\"" << id << "\";";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    std::string points;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      std::cout << "\tpoints: "<< res_->getString("points") << std::endl;
      points = res_->getString("points");
      count++;
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    std::cout << "\tNumber of entries: " << count << std::endl;
    std::cout << "\t... MySQL replies: Success." << std::endl;
    return new Driver(id, name, email, password, phone, address, points, "available");

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    return NULL;
  }
}

void Database::updateDriver(std::string id, std::string name, std::string email, std::string password, std::string phone){
  try {
    //update based on id
    std::stringstream sstr;
    sstr << "UPDATE DRIVER SET name = \'";
    sstr << name << "\', ";
    sstr << "email = \'" << email << "\', ";
    sstr << "password = \'" << password << "\', ";
    sstr << "phone = \'" << phone << "\' ";
    //dont do points as they are currently not the same as in driver class
    //sstr << "points = \'" << points << "\' ";
    sstr << "WHERE id = \'" << id << "\';";

    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}

void Database::removeSponsor(std::string id){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "DELETE FROM SPONSOR WHERE id = \'";
    sstr << id << "\';";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
void Database::createSponsor(std::string name, std::string email, std::string password, 
  std::string phone, std::string point_value){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "INSERT INTO SPONSOR ( name, email, password, phone, point_value ) ";
    sstr << "VALUES ( \"" << name << "\", \"" << email << "\", \"";
    sstr << password << "\", \""<< phone << "\", \""<< point_value << "\" );";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
std::vector<Sponsor*> Database::getSponsors(){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM SPONSOR;";
    std::cout << "Attempting statement: " << sstr.str() << std::endl;

    //Execute statement
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    std::vector<Sponsor*> return_sponsors;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    std::string point_value;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      std::cout << "\tpoint_value: "<< res_->getString("point_value") << std::endl;
      point_value = res_->getString("point_value");
      count++;
      return_sponsors.emplace_back(new Sponsor(id, name, email, password, phone, address, point_value));
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    std::cout << "\tNumber of entries: " << count << std::endl;
    std::cout << "\t... MySQL replies: Success." << std::endl;
    return return_sponsors;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    return std::vector<Sponsor*>();
  }
}

Sponsor* Database::getSponsor(std::string id){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM SPONSOR WHERE id = " << "\"" << id << "\";";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    std::string point_value;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      std::cout << "\tpoint_value: "<< res_->getString("point_value") << std::endl;
      point_value = res_->getString("point_value");
      count++;
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    std::cout << "\tNumber of entries: " << count << std::endl;
    std::cout << "\t... MySQL replies: Success." << std::endl;
    return new Sponsor(id, name, email, password, phone, address, point_value);

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    return NULL;
  }
}
  
void Database::updateSponsor(std::string id, std::string name, std::string email, std::string password, std::string phone, std::string point_value){
  try {
    //update based on id
    std::stringstream sstr;
    sstr << "UPDATE SPONSOR SET name = \'";
    sstr << name << "\', ";
    sstr << "email = \'" << email << "\', ";
    sstr << "password = \'" << password << "\', ";
    sstr << "phone = \'" << phone << "\', ";
    sstr << "point_value = \'" << point_value << "\' ";
    sstr << "WHERE id = \'" << id << "\';";

    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}

void Database::removeAdmin(std::string id){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "DELETE FROM ADMIN WHERE id = \'";
    sstr << id << "\';";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}

void Database::createAdmin(std::string name, std::string email, std::string password, 
  std::string phone){

  try {
    //Build statement
    std::stringstream sstr;
    sstr << "INSERT INTO ADMIN ( name, email, password, phone ) ";
    sstr << "VALUES ( \"" << name << "\", \"" << email << "\", \"";
    sstr << password << "\", \""<< phone << "\" );";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}

std::vector<Admin*> Database::getAdmins(){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM ADMIN;";
    std::cout << "Attempting statement: " << sstr.str() << std::endl;

    //Execute statement
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    std::vector<Admin*> return_admins;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      count++;
      return_admins.emplace_back(new Admin(id, name, email, password, phone, address));
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    std::cout << "\tNumber of entries: " << count << std::endl;
    std::cout << "\t... MySQL replies: Success." << std::endl;
    return return_admins;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    return std::vector<Admin*>();
  }
}

Admin* Database::getAdmin(std::string id){
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM ADMIN WHERE id = " << "\"" << id << "\";";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      count++;
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    std::cout << "\tNumber of entries: " << count << std::endl;
    std::cout << "\t... MySQL replies: Success." << std::endl;
    return new Admin(id, name, email, password, phone, address);

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
    return NULL;
  }
}
   
void Database::updateAdmin(std::string id, std::string name, std::string email, std::string password, std::string phone){
  try {
    //update based on id
    std::stringstream sstr;
    sstr << "UPDATE ADMIN SET name = \'";
    sstr << name << "\', ";
    sstr << "email = \'" << email << "\', ";
    sstr << "password = \'" << password << "\', ";
    sstr << "phone = \'" << phone << "\' ";
    sstr << "WHERE id = \'" << id << "\';";

    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}

void Database::removeAmazonItem(std::string id){
  try {
    //DELETE FROM somelog WHERE user = 'jcole'
    std::stringstream sstr;
    sstr << "DELETE FROM AMAZON_ITEM WHERE item_id = \'";
    sstr << id << "\';";

    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    stmt_->execute(sstr.str());
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
}
void Database::getAmazonItems(){
     try {
      std::string str = "SELECT * FROM AMAZON_ITEM;";
      std::cout << "Attempting statement: " << str << std::endl;
      stmt_ = con_->createStatement();
      res_ = stmt_->executeQuery(str);
      std::cout << "\t... MySQL replies: " << std::endl;
      int count = 0;
      while (res_->next()) {
        /* Access column data by alias or column name */
        std::cout << "\t-------------------------------------------" << std::endl;
        std::cout << "\tid: "<< res_->getString("item_id") << std::endl;
        std::cout << "\tname: "<< res_->getString("name") << std::endl;
        std::cout << "\tprice: "<< res_->getString("price") << std::endl;
        std::cout << "\tdescription: "<< res_->getString("description") << std::endl;
        std::cout << "\turl: "<< res_->getString("url") << std::endl;
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
void Database::createAmazonItem(std::string name, std::string price, std::string description, std::string url){
  try {

    std::stringstream sstr;
    sstr << "INSERT INTO AMAZON_ITEM ( name, price, description, url) ";
    sstr << "VALUES ( \"" << name << "\", \"" << price << "\", \"";
    sstr << description << "\", \""<< url << "\" );";

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

Item * Database::getAmazonItem(std::string id){
  Item * ritem;
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM AMAZON_ITEM WHERE item_id = " << "\"" << id << "\";";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    while (res_->next()) {
      /* Access column data by alias or column name */
      ritem= new Item(std::stoi(res_->getString("id")),res_->getString("name"),res_->getDouble("price"),res_->getString("description"),res_->getString("url"),res_->getInt("availability"));
      count++;
    }
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return ritem;
}

std::vector<int> Database::getCatalogItems(std::string id){
  std::vector<int> itemids;
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT item_id FROM AMAZON_ITEM, CATALOG, CATLOG_AMAZON_ITEM WHERE item_id=my_amazon_item_id AND cat_id=my_catalog_id AND cat_id = " << "\"" << id << "\";";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    while (res_->next()) {
      /* Access column data by alias or column name */
      itemids.push_back(res_->getInt("item_id"));
      count++;
    }
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return itemids;

}

void Database::removeCatalog(std::string id){
  try {
    //DELETE FROM somelog WHERE user = 'jcole'
    std::stringstream sstr;
    sstr << "DELETE FROM CATALOG WHERE cat_id = \'";
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
void Database::getCatalogs(){
     try {
      std::string str = "SELECT * FROM CATALOG;";
      std::cout << "Attempting statement: " << str << std::endl;
      stmt_ = con_->createStatement();
      res_ = stmt_->executeQuery(str);
      std::cout << "\t... MySQL replies: " << std::endl;
      int count = 0;
      while (res_->next()) {
        /* Access column data by alias or column name */
        std::cout << "\t-------------------------------------------" << std::endl;
        std::cout << "\tcatalog id: "<< res_->getString("cat_id") << std::endl;
        std::cout << "\tsponsor id: "<< res_->getString("my_sponsor_id") << std::endl;
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

Catalog* Database::getCatalog(std::string id){
  Catalog* rcat;
  try {
    //Build statement
    std::stringstream sstr;
    sstr << "SELECT * FROM CATALOG WHERE cat_id = " << "\"" << id << "\";";

    //Execute statement
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    std::cout << "\t... MySQL replies: " << std::endl;

    //Parse results
    int count = 0;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      rcat=new Catalog(std::stoi(res_->getString("cat_id")),std::stoi(res_->getString("my_sponsor_id")));
      count++;
    }
    std::cout << "\t... MySQL replies: Success." << std::endl;

  } catch (sql::SQLException &e) {
    std::cout << "# ERR: SQLException in " << __FILE__;
    std::cout << "(" << __FUNCTION__ << ") on line "
       << __LINE__ << std::endl;
    std::cout << "# ERR: " << e.what();
    std::cout << " (MySQL error code: " << e.getErrorCode();
    std::cout << ", SQLState: " << e.getSQLState() << " )" << std::endl;
  }
  return rcat;
}
void Database::createCatalog(std::string my_sponsor_id){
  try {

    std::stringstream sstr;
    sstr << "INSERT INTO CATALOG ( my_sponsor_id) ";
    sstr << "VALUES ( \"" << my_sponsor_id << "\" );";

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
    return "Success.";
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

User* Database::login(std::string input_email, std::string input_password){
  //returns 0 on failure, if greater than 0, then it's a success
  //    returns 1 if driver, 2 if sponsor, 3 if admin
  try {
    //Build statement - Admin
    std::stringstream sstr;
    sstr << "SELECT * ";
    sstr << "FROM ADMIN ";
    sstr << "WHERE email = \"" << input_email << "\" AND password = \"" << input_password << "\" ;";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());

    //Parse results
    int count = 0;
    std::string id;
    std::string name;
    std::string email;
    std::string password;
    std::string phone;
    std::string address;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      count++;
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    if(count > 0){
      std::cout << "\t... MySQL replies: Admin found." << std::endl;
      return new Admin(id, name, email, password, phone, address);
    }else{
      std::cout << "\t... MySQL replies: No Admin found." << std::endl;
    }



    //Build statement - Sponsor
    sstr.str("");
    sstr << "SELECT * ";
    sstr << "FROM SPONSOR ";
    sstr << "WHERE email = \"" << input_email << "\" AND password = \"" << input_password << "\" ;";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());

    //Parse results
    count = 0;
    id.clear();
    name.clear();
    email.clear();
    password.clear();
    phone.clear();
    address.clear();
    std::string point_value;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      std::cout << "\tpoint_value: "<< res_->getString("point_value") << std::endl;
      point_value = res_->getString("point_value");
      count++;
    }
    std::cout << "\t-------------------------------------------" << std::endl;
    if(count > 0){
      std::cout << "\t... MySQL replies: Sponsor found." << std::endl;
      return new Sponsor(id, name, email, password, phone, address, point_value);
    }else{
      std::cout << "\t... MySQL replies: No Sponsor found." << std::endl;
    }

    //Build statement - Driver
    sstr.str("");
    sstr << "SELECT * ";
    sstr << "FROM DRIVER ";
    sstr << "WHERE email = \"" << input_email << "\" AND password = \"" << input_password << "\" ;";

    //Execute statement
    std::cout << "Attempting statement: " << sstr.str() << std::endl;
    stmt_ = con_->createStatement();
    res_ = stmt_->executeQuery(sstr.str());
    
    //Parse results
    count = 0;
    id.clear();
    name.clear();
    email.clear();
    password.clear();
    phone.clear();
    address.clear();
    std::string points;
    while (res_->next()) {
      /* Access column data by alias or column name */
      std::cout << "\t-------------------------------------------" << std::endl;
      std::cout << "\tid: "<< res_->getString("id") << std::endl;
      id = res_->getString("id");
      std::cout << "\tname: "<< res_->getString("name") << std::endl;
      name = res_->getString("name");
      std::cout << "\temail: "<< res_->getString("email") << std::endl;
      email = res_->getString("email");
      std::cout << "\tpassword: "<< res_->getString("password") << std::endl;
      password = res_->getString("password");
      std::cout << "\tphone: "<< res_->getString("phone") << std::endl;
      phone = res_->getString("phone");
      std::cout << "\taddress: "<< res_->getString("address") << std::endl;
      address = res_->getString("address");
      std::cout << "\tpoints: "<< res_->getString("points") << std::endl;
      points = res_->getString("points");
      count++;
    }
    std::cout << "\t-------------------------------------------" << std::endl;

    if(count > 0){
      std::cout << "\t... MySQL replies: Driver found." << std::endl;
      return new Driver(id, name, email, password, phone, address, points, "available");
    }else{
      std::cout << "\t... MySQL replies: No driver found." << std::endl;
    }
    

    //If user doesnt exist return null
    std::cout << "\t... MySQL replies: No users found." << std::endl;
    return NULL;

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