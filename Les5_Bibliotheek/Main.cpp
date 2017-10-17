#include <iostream>
#include "Bibliotheek.h"

int main() {
	Bibliotheek kast1 = Bibliotheek();
	kast1.toon();

	kast1.voegToe("The Testing");
	std::cout << "---Kast 1" << std::endl;
	kast1.toon();

	Bibliotheek kast2;
	kast2 = kast1;
	std::cout << "---Kast 2" << std::endl;
	kast2.toon();

	kast1.voegToe("I am number four");
	std::cout << "---Kast 1" << std::endl;
	kast1.toon();

	std::cout << "---Kast 2" << std::endl;
	kast2.toon();

	int c;
	std::cin >> c;

	return 0;
}