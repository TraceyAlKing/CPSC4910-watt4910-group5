#include "DatabaseInterface.hpp"

//https://buffet.cs.clemson.edu/sqldb/u/tracey/CPSC4910-watt-group5/

int main(){

  try{
    db().init();
  }catch(const std::exception&){
    return EXIT_FAILURE;
  }

  DatabaseInterface dbi;

  std::string str;
  int id;

  User* my_dude;
  Admin* admin_dude;
  Driver* driver_dude;
  Sponsor* sponsor_dude;
  Catalog* catalog_dude;
  Item* item_dude;

  while(str != "end"){

    str.clear();
    
    std::cout << "Enter an object type: " << std::endl;

    std::getline(std::cin, str);

    if(str == "admin"){
      str.clear();
      std::cout << "Enter the ID: " << std::endl;
      std::cin >> id;

      admin_dude = dbi.getAdmin(id);

      if(admin_dude){
        std::cout << "my admin dude my dude" << std::endl;
      }else{
        std::cout << "noadmindude my dude" << std::endl;
      }
    }else if(str == "driver"){
      str.clear();
      std::cout << "Enter the ID: " << std::endl;
      std::cin >> id;

      driver_dude = dbi.getDriver(id);

      if(driver_dude){
        std::cout << "my driver dude my dude" << std::endl;
      }else{
        std::cout << "nodriverdude my dude" << std::endl;
      }
    }else if(str == "sponsor"){
      str.clear();
      std::cout << "Enter the ID: " << std::endl;
      std::cin >> id;

      sponsor_dude = dbi.getSponsor(id);

      if(sponsor_dude){
        std::cout << "my sponsor dude my dude" << std::endl;
      }else{
        std::cout << "nosponsordude my dude" << std::endl;
      }
    }else if(str == "catalog"){
      str.clear();
      std::cout << "Enter the ID: " << std::endl;
      std::cin >> id;

      catalog_dude = dbi.getCatalog(id);

      if(catalog_dude){
        std::cout << "my catalog dude my dude" << std::endl;
      }else{
        std::cout << "nocatalogdude my dude" << std::endl;
      }
    }else if(str == "item"){
      str.clear();
      std::cout << "Enter the ID: " << std::endl;
      cin >> id;

      item_dude = dbi.getItem(id);

      if(driver_dude){
        std::cout << "my item dude my dude" << std::endl;
      }else{
        std::cout << "noitemdude my dude" << std::endl;
      }
    }
  }

  return 0;
}