#include "OV.h"



#include <iostream>

void OV::prijsPerKM() {
	std::cout << "prijs per kilometer" << std::endl;
}

OV::OV(const std::string& name) : name(name) {

}

OV::OV() {
	std::cout << "Openbaar vervoer" << std::endl;
}


