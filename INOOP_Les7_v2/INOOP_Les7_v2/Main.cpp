#include <iostream>
#include <vector>

#include "OV.h"
#include "Trein.h"
#include "Bus.h"

//Hij wil geen berekening maken en geeft me errors maar ik snap niet precies waarom?
//Ik heb het zo ver mogelijk geprobeerd als dat ik snapte

int main() {
	Trein trein = Trein();
	Bus bus = Bus();

	trein.totaleKosten();
	trein.treinReizigers();
	bus.totaleKosten();
	bus.busReizigers();

	std::cout << trein.totaleKosten * trein.treinReizigers << std::endl;
	std::cout << bus.totaleKosten * bus.busReizigers << std::endl;
	std::cout << "Totale kosten van de trein en bus opgeteld:" << (trein.totaleKosten * trein.treinReizigers) + (bus.totaleKosten * bus.busReizigers) << std::endl;
}