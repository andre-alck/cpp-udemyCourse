#include <iostream>
#include <string>
#include "person.h"

Person::Person()
{
	name = "standard";
}

std::string Person::toString()
{
	return "Person's name is: " + name;
}

void Person::setName(std::string newName)
{
	name = newName;
}