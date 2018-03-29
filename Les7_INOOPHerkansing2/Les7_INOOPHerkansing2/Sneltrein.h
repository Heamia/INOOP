#pragma once

#include "OV.h"

class Sneltrein : public OV
{
public:
	Sneltrein(std::string name);
	void prijsPerKM();
	void maxPassagiers();

	float prijs;
	int passagiers;
};

