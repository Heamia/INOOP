#include <iostream>
#include "Boek.h"

Boek::Boek(std::string type) {
	_type = type;
}

Boek::Boek() {
	std::cout << "Broodje: ctor" << std::endl;

}

Boek::~Boek() {
	std::cout << "Broodje: dtor" << std::endl;
}