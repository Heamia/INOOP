#include <iostream>
#include "Mens.h"
//de mens die de leeftijd en naam kan returnen
Mens::Mens() {

}

Mens::~Mens() {

}

int Mens::getLeeftijd() {
	return leeftijd;
}

std::string Mens::getNaam() {
	return naam;
}