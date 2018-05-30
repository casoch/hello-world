#include <iostream>
#include <string>

int Register()
{
	std::string username, userpwd;
	std::cout << "Di tu username ...";
	std::getline(std::cin, username);
	std::cout << "Di tu password ...";
	std::getline(std::cin, userpwd);

	std::cout << "Y aquí Gerard ha programado el registro\n";

	return 0;

}


int main()
{
	std::cout << "Hello GitHub" << std::endl;
	return 0;
}