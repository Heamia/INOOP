#pragma once

#include "OV.h"

class Hogesnelheidstrein : public OV
{
public:
	Hogesnelheidstrein(std::string name);
	void prijsPerKM();
	void maxPassagiers();

	float prijs;
	int passagiers;
};