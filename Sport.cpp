#include "Sport.h"
#include <iostream>

void Sport::showSport() const
{
	std::cout << "Sport" << std::endl;
}

void Sport::showPopularity() const
{
	std::cout << "Popularity is " << _popularity << std::endl;
}
