#pragma once
#include <iostream>

class Animal
{
protected:
	std::string name;
	
public:
	Animal() ;
	Animal(const std::string &);
	//virtual ~Animal() {};
	virtual void make_sound() = 0;

};

class Dog : public Animal
{
	int height;
	int weight;
	std::string collor;
	std::string gender;

public:
	Dog(std::string &, std::string &, std::string &, int, int);
	void make_sound();
	void wag();

};
/*
class Cat : public Animal
{
public:
	Cat(char const* name) : Animal(name) {}
	void make_sound();
	void purr();
};
*/