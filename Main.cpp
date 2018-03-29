#include <iostream>
#include <vector>
#include "OV.h"
#include "Sneltrein.h"
#include "Hogesnelheidstrein.h"
#include "Trein.h"



int main() {
	Sneltrein sneltrein1 = Sneltrein("Rotterdam Centraal");
	Hogesnelheidstrein hogesnelheidstrein1 = Hogesnelheidstrein("Amsterdam Centraal");
	Trein trein1 = Trein("Schiedam Centrum");

	sneltrein1.prijsPerKM();
	sneltrein1.maxPassagiers();
	hogesnelheidstrein1.prijsPerKM();
	hogesnelheidstrein1.maxPassagiers();
	trein1.prijsPerKM();
	trein1.maxPassagiers();

	std::cout << "De sneltrein levert in totaal €" << sneltrein1.prijs*sneltrein1.passagiers << " op." << std::endl;
	std::cout << "De hogesnelheidstrein levert in totaal €" << hogesnelheidstrein1.prijs*hogesnelheidstrein1.passagiers << " op." << std::endl;
	std::cout << "De trein levert in totaal €" << trein1.prijs*trein1.passagiers << " op." << std::endl;

	char key;
	std::cin >> key;

	return 0;

}