#include "Database.hpp"

//https://buffet.cs.clemson.edu/sqldb/u/tracey/CPSC4910-watt-group5/

int main(){

  try{
    db().init();
  }catch(const std::exception&){
    return EXIT_FAILURE;
  }
  

  std::string str;
  std::string email;
  std::string password;
  User* my_dude;
  std::cout << "Enter a SQL command: " << std::endl;
  std::getline(std::cin, str);
  while(str != "end"){
    //db().executeUnguardedStatement(str);
    //std::string name, std::string email, std::string password, 
    //std::string phone, std::string points
    //db().getDriver("1");
    //db().createDriver("jilly joe", "jjabrahms@joeslobstershack.com", "marrybarrycakes", "1789375675", "0");
    //db().getDrivers();
    //db().removeDriver("5");
    //db().getDrivers();

    if(str == "login"){
      email.clear();
      std::cout << "Enter your email: " << std::endl;
      std::getline(std::cin, email);
      password.clear();
      std::cout << "Enter your password: " << std::endl;
      std::getline(std::cin, password);

      my_dude = db().login(email, password);

      if(my_dude){
        std::cout << "my dude my dude" << std::endl;
      }else{
        std::cout << "nodude my dude" << std::endl;
      }
    }
    if(str == "admintest"){
      std::string id, name, phone;
      Admin* admintest;
      id="1";
      admintest=db().getAdmin(id);
      std::cout << "enter new name: ";
      std::getline(std::cin, name);
      std::cout << "enter new email: ";
      std::getline(std::cin, email);
      std::cout << "enter new password: ";
      std::getline(std::cin, password);
      std::cout << "enter new phone: ";
      std::getline(std::cin, phone);
      admintest->setName(name);
      admintest->setEmail(email);
      admintest->setPassword(password);
      admintest->setPhone(phone);
      admintest->updateAdmin();

    }
    if(str == "drivertest"){
      std::string id, name, phone, points;
      Driver* drivertest;
      id="1";


      drivertest=db().getDriver(id);

      drivertest->allPoints();

      std::cout << "enter new name: ";
      std::getline(std::cin, name);
      std::cout << "enter new email: ";
      std::getline(std::cin, email);
      std::cout << "enter new password: ";
      std::getline(std::cin, password);
      std::cout << "enter new phone: ";
      std::getline(std::cin, phone);
      /* dont do points yet, they no work
      std::cout << "enter new points: ";
      std::getline(std::cin, points);
      */
      drivertest->setName(name);
      drivertest->setEmail(email);
      drivertest->setPassword(password);
      drivertest->setPhone(phone);
      //drivertest->setPoints(points);
      drivertest->updateDriver();

    }
    if(str == "sponsortest"){
      std::string id, name, phone, points;
      Sponsor* sponsortest;
      id="1";
      sponsortest=db().getSponsor(id);
      std::cout << "enter new name: ";
      std::getline(std::cin, name);
      std::cout << "enter new email: ";
      std::getline(std::cin, email);
      std::cout << "enter new password: ";
      std::getline(std::cin, password);
      std::cout << "enter new phone: ";
      std::getline(std::cin, phone);
      std::cout << "enter new Point Value: ";
      std::getline(std::cin, points);
      sponsortest->setName(name);
      sponsortest->setEmail(email);
      sponsortest->setPassword(password);
      sponsortest->setPhone(phone);
      sponsortest->setPV(points);
      sponsortest->updateSponsor();

    }
    if(str=="catalogtest"){
      Catalog* catalogtest=db().getCatalog("2");
      std::vector<Item*> items1;
      items1=catalogtest->getItems();

      catalogtest->removeItem(2);
      catalogtest->updateCatalog();

      Catalog* catalogtest2=db().getCatalog("2");
      std::vector<Item*> items2;
      items2=catalogtest2->getItems();

      catalogtest2->addItem(2);
      catalogtest2->updateCatalog();

      Catalog* catalogtest3=db().getCatalog("2");
      std::vector<Item*> items3;
      items3=catalogtest3->getItems();

      std::cout << "Original items in catalog 2" <<std::endl;
      for(auto it: items1){
        std::cout << it->getname() << std::endl;
      }
      std::cout << std::endl;

      std::cout << "Catalog 2 after removing item 2" << std::endl;
      for(auto it: items2){
        std::cout << it->getname() << std::endl;
      }
      std::cout << std::endl;

      std::cout << "Catalog 2 after adding item 2 back" << std::endl;
      for(auto it: items3){
        std::cout << it->getname() << std::endl;
      }
      std::cout << std::endl;

    }
    if(str=="itemtest"){
      Item * itemtest=db().getAmazonItem("2");
    }


    str.clear();
    std::cout << "Enter a SQL command: " << std::endl;
    std::getline(std::cin, str);

  }

  return 0;
}