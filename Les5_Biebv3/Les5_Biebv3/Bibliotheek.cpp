#include "Bibliotheek.h"
#include "Boek.h"
#include <iostream>	



Bibliotheek::Bibliotheek()
{
	std::cout << "Bibliotheek: constructor" << std::endl;

}

Bibliotheek::~Bibliotheek()
{
	std::cout << "Bibliotheek: deconstructor" << std::endl;
	delete boek;
}

void Bibliotheek::toon()
{

	std::cout << "U houdt het boek " << boek->_titel << " vast." << std::endl;
}

void Bibliotheek::voegToe(std::string titel)
{
	boek = new Boek(titel);
	boekenlijst.push_back(boek); 
}

Bibliotheek::Bibliotheek(const Bibliotheek & andereKast)
{
	boek = new Boek();
	boek->_titel = andereKast.boek->_titel; 
}

Bibliotheek & Bibliotheek::operator=(const Bibliotheek & andereKast)
{
	if (this != &andereKast) {
		delete boek;
		boek = new Boek();
		boek->_titel = andereKast.boek->_titel;
	}
	return *this;
}