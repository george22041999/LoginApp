// App.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include "User.hpp"
#include "Login.hpp"

bool fileExists(std::string fname)
{
	std::ifstream f(fname.c_str());
    return f.good();
}

bool fileEmpty(std::string fname)
{
	std::ifstream f(fname.c_str());
	return f.peek() == std::ifstream::traits_type::eof();
}

int main()
{
	Login l;
	l.signup("nume1", "pass1");
	l.signup("nume2", "pass2");

	std::string name, pass;
	std::cout << "Enter username then password" << std::endl;
	std::cin >> name >> pass;
	
	if(l.login(name, pass)){
		std::cout << "Logged in successfully";
	}else{
		std::cout << "Login failed";
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
