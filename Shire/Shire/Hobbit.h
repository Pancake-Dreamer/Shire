#pragma once
#include <string>

class Hobbit {

private:
	std::string lastName;

public:

	Hobbit(std::string l)
	{
		setLastName(l);
	}

	void setLastName(std::string l)
	{
		lastName = l;
	}

	std::string getLastName()
	{
		return lastName;
	}

	bool beActinUp()
	{
		return true;
	}
};