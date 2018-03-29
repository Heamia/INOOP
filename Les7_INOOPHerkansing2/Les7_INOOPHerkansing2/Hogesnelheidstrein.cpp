#include "Hogesnelheidstrein.h"


#include <iostream>

void Hogesnelheidstrein::prijsPerKM() {
	prijs = 2.80;
	std::cout << "1 kaartje voor de sneltrein kost €" << prijs << std::endl;
}

void Hogesnelheidstrein::maxPassagiers() {
	passagiers = 350;
	std::cout << "Het maximale aantal passagiers voor de Hogesnelheidstrein is " << passagiers << std::endl;
}

Hogesnelheidstrein::Hogesnelheidstrein(std::string name) : OV(name) {}
