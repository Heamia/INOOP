#include "Boek.h"
#include <string>



Boek::Boek()
{
	std::cout << "Boek: constructor" << std::endl;
}

Boek::~Boek()
{
	std::cout << "Boek: deconstructor" << std::endl;
}

Boek::Boek(std::string titel)
{
	_titel = titel;
}