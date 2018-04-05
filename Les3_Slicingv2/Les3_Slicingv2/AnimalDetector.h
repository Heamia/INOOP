#pragma once
#include "Cat.h"
#include "Dog.h"

class AnimalDetector {
public:
	void detect(Dog d);
	void detect(Cat c);
	void detect(Animal a);
};
