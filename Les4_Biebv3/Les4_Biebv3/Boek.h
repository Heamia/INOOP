#pragma once
#include <string>

class Boek
{
public:
	Boek();
	Boek(std::string title, bool beschikbaar);

	std::string _title = "The Testing";
	bool _beschikbaar = false;
};