#pragma once
#include <iostream>
#include "Mens.h"

//Class definitie van docent
class Docent : public Mens
{
public:
	float uurLoon;
	int uurPerMaand;
	float geldPerMaand(float loon, int werkUren);
	Docent(int docentLeeftijd, std::string docentNaam);
	~Docent();
};