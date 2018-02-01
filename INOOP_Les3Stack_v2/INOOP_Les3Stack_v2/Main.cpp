#include <iostream>
#include "Bibliotheek.h"

void nieuweBoeken(Bibliotheek bieb) {
	std::cout << "We gaan boeken toevoegen!" << std::endl;
	bieb.toon(); //hier nog de kopie
	bieb.voegToe("The Testing"); // hier wordt kopie overschreven
	bieb.toon();
}

int main() {
	Bibliotheek bieb = Bibliotheek();
	bieb.toon(); // Leeg
	bieb.voegToe("I am number Four");
	bieb.toon();
	nieuweBoeken(bieb); // geeft kopie bieb
	bieb.toon(); // Laat I am number Four zien want Stack
	return 0;
}