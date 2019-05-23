#include "Animal.h"
#include <string>

Animal::Animal() {};
Animal::Animal( const std::string& a_name)
{
	name = a_name;
}


// Class Dog Inherited from Abstruct class Animal
Dog::Dog(const std::string &a_name, const std::string &a_collor, const std::string &a_gender, int h, int w ): Animal(a_name)
{
	//name = d_name;
	collor = a_collor;
	gender = a_gender;
	height = h;
	weight = w;
}
void Dog:: make_sound()
{
	std::cout << name << " the dog said: bork!" << std::endl;
}

void Dog:: age(int h, int w)
{
	 if (h * w <= 20)
		 std::cout << name << " age is between 1 - 10" << std::endl;
	 else
		 std::cout << name << " age is between 10 - 20" << std::endl;
	//std::cout << "*" << name << " wags*" << std::endl;
}



// Class Cat Inherited from Abstruct class Animal
Cat::Cat(const std::string &a_name, const std::string &a_collor, const std::string &a_gender, int h, int w) : Animal(a_name)
{
	//name = d_name;
	collor = a_collor;
	gender = a_gender;
	height = h;
	weight = w;
}

void Cat::make_sound() 
{
	std::cout << name << " the cat said: mow!" << std::endl;
}

void Cat::age(int h, int w)
{
	if (h * w <= 10)
		std::cout << name << " age is between 1 - 13" << std::endl;
	else
		std::cout << name << " age is between 13 - 25" << std::endl;
}

void Cat::purr(const std::string &a_collor)
{
	if (a_collor.length() > 0)
	std::cout << name << " is collored" << std::endl;
}
