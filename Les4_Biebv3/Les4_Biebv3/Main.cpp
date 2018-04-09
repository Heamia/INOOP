#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"



int main() {

	Bibliotheek bieb = Bibliotheek();


	bieb.toonBeschikbaarheid();

	bieb.verleenBoek();
	bieb.toonBeschikbaarheid();

	char c;
	std::cin >> c;

	return 0;
}