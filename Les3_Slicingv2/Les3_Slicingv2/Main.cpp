#include <iostream>
#include "Animal.h"
#include "AnimalDetector.h"
#include "Cat.h"
#include "Dog.h"

// Slicing

void saySomething(Animal& animal) {
	animal.makeNoise();
	animal.feed();
}


int main() {
	Animal animal1 = Animal("Beast");
	Dog animal2 = Dog("Mickie");
	Cat animal3 = Cat("Cooper");

	animal1.makeNoise();
	animal2.makeNoise();
	animal3.makeNoise();

	saySomething(animal1);
	std::cout << animal1.isHungry() << std::endl;
	saySomething(animal2);
	std::cout << animal2.isHungry() << std::endl;
	saySomething(animal3);
	std::cout << animal3.isHungry() << std::endl;

	AnimalDetector detector;
	detector.detect(animal2);
	detector.detect(animal3);

	char c;
	std::cin >> c;

	return 0;
}
