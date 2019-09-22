#include <iostream>
#include "Login.hpp"

std::vector<User> Login::getUsers()
{
	return m_users;
}

void Login::setUsers(std::vector<User> users)
{
	m_users = users;
}

void Login::signup(std::string name, std::string password)
{
	User u(name, password, 0);
	m_users.push_back(u);
}

bool Login::login(std::string name, std::string password)
{	
	bool ok = false;
	User u(name, password, 0);
	for (int i = 0; i < m_users.size(); i++)
	{
		User temp = m_users.at(i);
		if (u.getName().compare(temp.getName()) == 0 && u.getPassword().compare(temp.getPassword()) == 0)
		{
			ok = true;
		}
	}
	return ok;
}

