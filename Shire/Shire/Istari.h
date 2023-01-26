#pragma once
#include <string>
#include "Hobbit.h"

class Istari {

private:



public:

	std::string callFool(Hobbit h)
	{
		return "Fool of a " + h.getLastName() + "!";
	}


};