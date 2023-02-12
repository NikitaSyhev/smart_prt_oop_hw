#pragma once
#include"Sport.h"
class Hockey:public Sport
{
public:
	virtual void showSport() const;
	virtual void showPopularity() const;

private:
	int _popularity;
};

