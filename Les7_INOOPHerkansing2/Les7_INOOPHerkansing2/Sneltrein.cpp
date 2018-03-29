#include "Sneltrein.h"


#include <iostream>

void Sneltrein::prijsPerKM() {
	prijs = 1.50;
	std::cout << "1 kaartje voor de sneltrein kost €" << prijs << std::endl;
}

void Sneltrein::maxPassagiers() {
	passagiers = 200;
	std::cout << "Het maximale aantal passagiers voor de sneltrein is " << passagiers << std::endl;
}

Sneltrein::Sneltrein(std::string name) : OV(name){}

