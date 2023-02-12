#include "Hockey.h"
#include <iostream>

void Hockey::showSport() const
{
	std::cout << "Hockey" << std::endl;
}

void Hockey::showPopularity() const
{
	std::cout << "Popularuty is " << _popularity << std::endl;
}
