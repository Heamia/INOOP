#pragma once
#include "OV.h"

class Trein :
	public OV
{
public:
	Trein();
	~Trein();

	void treinReizigers();
	void totaleKosten();

	bool toeslag = 0;

private:
	int reizigers;
	float kosten;
};

