#pragma once

#include <string>

class OV
{
public:
	OV(const std::string& name);
	virtual void prijsPerKM() = 0;
	virtual void maxPassagiers() = 0;

	OV();

private:
	std::string name;
};

