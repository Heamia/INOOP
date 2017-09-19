#include <iostream>
#include "Docent.h"

//Docent leeftijd en naam
Docent::Docent(int docentLeeftijd, std::string docentNaam)
{
	leeftijd = docentLeeftijd;
	naam = docentNaam;
}


Docent::~Docent()
{

}
//Berekening van geld voor docent
float Docent::geldPerMaand(float loon, int werkUren)
{
	uurLoon = loon;
	uurPerMaand = werkUren;
	return uurLoon * uurPerMaand;
}