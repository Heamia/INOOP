#include <iostream>
#include "Cat.h"

void Cat::makeNoise() {
	std::cout << "Miauw!" << std::endl;

}

Cat::Cat(std::string name) : Animal(name) {}
