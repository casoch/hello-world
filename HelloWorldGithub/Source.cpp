#include <iostream>
#include <string>

int Register()
{
	std::string username, userpwd;
	std::cout << "Di tu username ...";
	std::getline(std::cin, username);
	std::cout << "Di tu password ...";
	std::getline(std::cin, userpwd);

	std::cout << "Y aqu� Gerard ha programado el registro\n";

	return 0;

}

int Login()
{
	std::cout << "and finally, Joan programa el login\n";
	return 0;
}
void ChangeMap()
{
	std::cout << "En este funcion JC hace cosas del mapa\n";
}

int main()
{
	std::cout << "Hello GitHub" << std::endl;
	return 0;
}