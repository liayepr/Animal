#include "Animal.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	std::string &dname = "Dog";
	Dog D(dname, "red", "femail", 4 ,5 );
	std::cout << D.make_sound() << std::endl;
	
	system("pause");
}