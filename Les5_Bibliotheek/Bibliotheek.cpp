#include <iostream>
#include "Bibliotheek.h"

Bibliotheek::Bibliotheek() {
	std::cout << "Bibliotheek: ctor" << std::endl;
}

Bibliotheek::Bibliotheek(const Bibliotheek& bibliotheek) {
	std::cout << "Bibliotheek: copy-ctor" << std::endl;
	boek = new Boek();
	boek->_type = bibliotheek.boek->_type;
}

void Bibliotheek::toon() {
	std::cout << "    Boek in kast: " << boek->_type << std::endl;

}

void Bibliotheek::voegToe(std::string type) {
	delete boek;
	boek = new Boek(type);
}