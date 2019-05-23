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
	Dog(const std::string &, const std::string &, const std::string &, int, int);
	void make_sound();
	void age(int h, int w);

};

class Cat : public Animal
{
	int height;
	int weight;
	std::string collor;
	std::string gender;
public:
	Cat(const std::string &, const std::string &, const std::string &, int, int);
	void make_sound();
	void age(int h, int w);
	void purr(const std::string &a_collo);
};
