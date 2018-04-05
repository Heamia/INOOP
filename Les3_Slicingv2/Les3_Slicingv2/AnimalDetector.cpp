#include <iostream>
#include "AnimalDetector.h"

void AnimalDetector::detect(Cat c) {
	std::cout << "It's purring" << std::endl;
}

void AnimalDetector::detect(Dog d) {
	std::cout << "It's wagging his tail" << std::endl;
}

void AnimalDetector::detect(Animal a) {
	std::cout << "It's some sort of animal" << std::endl;
}