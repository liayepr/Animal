#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	const std::string& dname = "Dog";
	//const std::string& dname1 = "red";
	//const std::string& dname2 = "male";
	Dog  Rex(dname, "red", "male", 4 ,5 );
	Rex.make_sound();
	Rex.age(5, 6);

	const std::string& cname = "Cat";
	Cat  Kitty(cname, "pink", "female", 2, 3);
	Kitty.make_sound();
	Kitty.age(3, 2);
	Kitty.purr("pink");
	system("pause");
}