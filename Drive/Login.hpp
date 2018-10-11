#ifndef LOGIN_HPP
#define LOGIN_HPP

#include <string>
#include <vector>

class Login {
public:
	Login();
	Login(std::string);
	std::string Validate(std::string);
	bool Exists(std::string);
	void SetUsername(std::string);
	bool Loggedin();
	void Logout();

private:
	std::string Username;
	std::string acctype;
	bool loggedin;

	int Lookup();
	bool Match(std::string);
	void Type();
	std::vector<std::string> names = {"jeff", "tom", "bill", "Truckway"};
	std::vector<std::string> pass = {"ishouldchangethis", "buttowhat", "password", "wordpass"};
	std::vector<std::string> type = {"admin", "admin", "driver", "sponsor"};
};

#endif
