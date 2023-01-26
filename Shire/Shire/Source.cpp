#include <iostream>
#include "Istari.h"
#include "Hobbit.h"
#include "Half-Elven.h"
#include "Man.h"
#include "City.h"

using namespace std;

int main() {

	/*Istari Gandalf;
	Hobbit Pippin("Took");

	if (Pippin.beActinUp())
	{
		cout << Gandalf.callFool(Pippin) << endl;
	}*/

	Man Denethor(1);
	Man Faramir;
	City MinasTirith;

	if (Denethor.getChildCount() < 2 && MinasTirith.surrounded() == true)
	{
		Denethor.setPyreToHigh();
		Faramir.nervousChuckle();
	}

	system("pause");
	return 0;
}