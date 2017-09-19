#include <iostream>
#include "student.h"

//leeftijd en naam voor studenten
Student::Student(int studentLeeftijd, std::string studentNaam)
{
	leeftijd = studentLeeftijd;
	naam = studentNaam;
}

Student::~Student() {

}

//berekening van cijfers student
int Student::getCijfer(int a, int b, int c) {
	gemiddeldCijfer = (a + b + c) / 3;
	return gemiddeldCijfer;
}