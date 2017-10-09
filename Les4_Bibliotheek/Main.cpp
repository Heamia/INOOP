#include <iostream>

#include "Bibliotheek.h"

void leverBoekIn(Bibliotheek* kast) {
	std::cout << "Boek gekregen" << std::endl;
	kast->toon();

	kast->voegToe("Torak en wolf");
	kast->toon();
}

int main() {
	Bibliotheek* kast = new Bibliotheek();
	kast->toon();

	kast->voegToe("Game of Thrones: a Song of Ice and Fire");
	kast->toon();

	leverBoekIn(kast);
	kast->toon();

	return 0;
}