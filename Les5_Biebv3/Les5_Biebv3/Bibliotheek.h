#pragma once
#include "Boek.h"
#include <vector>

class Bibliotheek
{
public:


	Bibliotheek();
	virtual ~Bibliotheek(); 
	void toon();
	void voegToe(std::string titel);


	Bibliotheek(const Bibliotheek& andereKast);


	Bibliotheek& operator =(const Bibliotheek&);
	std::vector<Boek*> boekenlijst; 


private:
	Boek* boek = new Boek();
};