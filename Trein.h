#pragma once

#include "OV.h"

class Trein : public OV
{
public:
	Trein(std::string name);
	void prijsPerKM();
	void maxPassagiers();

	float prijs;
	int passagiers;
};