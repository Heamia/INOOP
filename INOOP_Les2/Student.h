#pragma once
#include <iostream>
#include "Mens.h"

//Class definitie van student
class Student : public Mens
{
public:
	int gemiddeldCijfer;
	int getCijfer(int a, int b, int c);
	Student(int studentLeeftijd, std::string studentNaam);
	~Student();
};
