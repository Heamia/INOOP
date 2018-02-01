#include <iostream>
#include "Broodmandje.h"

// HEAP
void geefMandjeDoor(Broodmandje* mandje) {
	std::cout << "Mandje gekregen" << std::endl;
	mandje->toon();

	mandje->voegToe(" pistolet");
	mandje->toon();
}

int main() {
	Broodmandje* mandje = new Broodmandje();
	mandje->toon();
	mandje->voegToe(" ciabatta");
	mandje->toon();
	geefMandjeDoor(mandje);
	mandje->toon();
	return 0;
}

// STACK
//void geefMandjeDoor(Broodmandje mandje) {
//	std::cout << "Mandje gekregen" << std::endl;
//	mandje.toon();
//
//	mandje.voegToe(" pistolet");
//	mandje.toon();
//}
//
//int main() {
//	Broodmandje mandje = Broodmandje();
//	mandje.toon();
//	mandje.voegToe(" ciabatta");
//	mandje.toon();
//	geefMandjeDoor(mandje);
//	mandje.toon();
//	return 0;
//}