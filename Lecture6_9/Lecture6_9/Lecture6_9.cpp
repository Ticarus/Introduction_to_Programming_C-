// Lecture6_9.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class Animal {	//An abstract classes methods must be written in any class which inherits the abstract class
public:
	virtual void playSound() = 0; //This is an abstract method and because it is an abstract method it makes the class abstract too
};
/*
class Dog : public Animal {
//if a class inherits from an abstract class and doesn't override the parent class' abstracts method the inheriting class becomes an abstract class too 
//NOTE: Abstract classes can't be used to create an object
};
*/
class Dog : public Animal {
	void playSound() {
		std::cout << "Woof Woof" << std::endl;
	}
};

class Cat : public Animal {
	void playSound() {
		std::cout << "Nya Nya" << std::endl;
	}
};

class Duck : public Animal {
	void playSound() {
		std::cout << "Shuba Shuba Shuba" << std::endl;
	}
};

class Rat : public Animal {
	void playSound() {
		std::cout << "Bruh" << std::endl;
	}
};

void playAllSound(Animal* animalPtr) {
	animalPtr->playSound();
}

int main()
{
	Dog dog;
	Cat cat;
	Duck duck;
	Rat rat;

	playAllSound(&rat);
}