#include <vector>
#include "User.hpp"

class Login {
private:
	std::vector<User> m_users;
public:
	std::vector<User> getUsers();
	void setUsers(std::vector<User> users);
	bool login(std::string name, std::string password);
	void signup(std::string name, std::string password);
};