#include <iostream>
#include "Boek.h"
#include "Bibliotheek.h"
#include <vector>


int main() {
	Bibliotheek thriller = Bibliotheek();
	thriller.toon();

	std::cout << "----- kast genre 'Thriller' " << std::endl;

	thriller.voegToe("Het meisje in het ijs");
	thriller.toon();

	Bibliotheek fantasy = thriller;
	fantasy.voegToe("Game of Thrones");
	fantasy.toon();

	Bibliotheek youngadult;
	youngadult = thriller;
	std::cout << "--- kast genre 'Young Adult'" << std::endl;
	youngadult.voegToe("The Testing");
	youngadult.voegToe("I am number four");
	youngadult.voegToe("Torak en Wolf");
	youngadult.voegToe("Wolves of the Beyond");
	youngadult.toon();

	thriller.voegToe("Achter gesloten deuren");
	std::cout << "--- kast genre 'Thriller' " << std::endl;
	thriller.toon();

	std::cout << "--- kast genre 'Fantasy'" << std::endl;
	fantasy.toon();

	std::cout << "de boekenlijst van de categorie 'thriller' bestaat uit " << thriller.boekenlijst.size() << " boeken" << std::endl;
	std::cout << "de boekenlijst van de categorie 'Young Adult' bestaat uit " << youngadult.boekenlijst.size() << " boeken" << std::endl;
	std::cout << "de boekenlijst van de categorie 'Fantasy' bestaat uit " << fantasy.boekenlijst.size() << " boeken" << std::endl;



	char c;
	std::cin >> c;
	return 0;
}