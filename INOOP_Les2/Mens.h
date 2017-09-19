#pragma once
#include <iostream>

class Mens
{
public:
	int leeftijd;
	std::string naam;
	int getLeeftijd();
	std::string getNaam();

	Mens();
	~Mens();
};
