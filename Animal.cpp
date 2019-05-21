#include "Animal.h"
#include <string>

Animal::Animal() {};
Animal::Animal( const std::string & a_name)
{
	name = a_name;
}


// Class Cat Inherited from Abstruct class Animal
Dog::Dog(std::string &d_name, std::string &a_collor, std::string &a_gender, int h, int w ): Animal(name)
{
	name = d_name;
	collor = a_collor;
	gender = a_gender;
	height = h;
	weight = w;
}
void Dog:: make_sound()
{
	std::cout << name << " the dog said: bork!" << std::endl;
}

void Dog:: wag()
{
	std::cout << "*" << name << " wags*" << std::endl;
}


/*
// Class Cat Inherited from Abstruct class Animal
void Cat::make_sound() 
{
	std::cout << m_name << " the cat said: mow!" << std::endl;
}

void Cat::purr()
{
	std::cout << "*" << m_name << " purrs*" << std::endl;
}
*/