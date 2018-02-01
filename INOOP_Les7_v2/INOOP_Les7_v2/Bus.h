#pragma once
#pragma once
#include "OV.h"

class Bus :
	public OV
{
public:
	Bus();
	~Bus();

	void busReizigers();
	void totaleKosten();

private:
	int reizigers;
	float kosten;
};
