#include <string>
#pragma once

class User {
private:
	std::string m_name;
	std::string m_password;
	int m_role;
public:
	User(std::string name, std::string password, int role);
	std::string getName();
	void setName(std::string name);
	std::string getPassword();
	void setPassword(std::string password);
	int getRole();
	void setRole(int role);

};
