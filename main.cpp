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


    str.clear();
    std::cout << "Enter a SQL command: " << std::endl;
    std::getline(std::cin, str);

  }

  return 0;
}