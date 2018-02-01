#include <iostream>
#include "Bibliotheek.h"

int main() {
	Bibliotheek bieb1 = Bibliotheek("Vlaardingen Bibliotheken");
	bieb1.voegToe("The Testing");
	bieb1.toon();

	Bibliotheek bieb2("Boe"); // Moest iets invullen, want Bibliotheek bieb2 = bieb1 werkt niet. Dan roept ie de default constructor aan.(??)
	bieb2 = bieb1;
	bieb2.toon();
	return 0;
}