#include <iostream>

#include "fonctionsTest.h"

using namespace std;

int nombreDeSecondes(int heures, int minutes, int secondes)
{
	int total = 0;

	total = heures * 60 * 60;
	total += minutes * 60;
	total += secondes;

	return total;
}








