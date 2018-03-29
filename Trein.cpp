#include "Trein.h"


#include <iostream>

void Trein::prijsPerKM() {
	prijs = 1.50;
	std::cout << "1 kaartje voor de trein kost €" << prijs << std::endl;
}

void Trein::maxPassagiers() {
	passagiers = 120;
	std::cout << "Het maximale aantal passagiers voor de trein is " << passagiers << std::endl;
}

Trein::Trein(std::string name) : OV(name) {}