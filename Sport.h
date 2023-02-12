#pragma once
class Sport
{public:
	virtual void showSport() const;
	virtual void showPopularity() const;

private:
	int _popularity;
};

