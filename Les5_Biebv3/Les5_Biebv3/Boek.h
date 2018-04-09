#pragma once
#include <iostream>
#include <string>

class Boek
{
public:
	Boek();
	virtual ~Boek();
	Boek(std::string titel);

	std::string _titel = "onbekend";
};

