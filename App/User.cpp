#include <iostream>
#include "User.hpp"

User::User(std::string name, std::string password, int role)
{
	m_name = name;
	m_password = password;
	m_role = role;
}

std::string User::getName()
{
	return m_name;
}

void User::setName(std::string name)
{
	m_name = name;
}

std::string User::getPassword()
{
	return m_password;
}

void User::setPassword(std::string password)
{
	m_password = password;
}

int User::getRole()
{
	return m_role;
}

void User::setRole(int role)
{
	m_role = role;
}