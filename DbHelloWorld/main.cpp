#include "Database.hpp"

//https://buffet.cs.clemson.edu/sqldb/u/tracey/CPSC4910-watt-group5/

int main(){

  try{
    db().init();
  }catch(const std::exception&){
    return EXIT_FAILURE;
  }

  std::string str;
  while(str != "end"){
    std::cout << "Enter a SQL command: " << std::endl;
    std::getline(std::cin, str);
    //db().executeUnguardedStatement(str);
    //std::string name, std::string email, std::string password, 
    //std::string phone, std::string points
    
    db().createDriver("jilly joe", "jjabrahms@joeslobstershack.com", "marrybarrycakes", "1789375675", "0");
    db().getDrivers();
    db().removeDriver("5");
    db().getDrivers();

    str.clear();
  }

  return 0;
}