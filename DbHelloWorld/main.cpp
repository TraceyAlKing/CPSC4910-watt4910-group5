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
    std::cin >> str;
    db().executeUnguardedStatement(str);
    str.clear();
  }

  return 0;
}