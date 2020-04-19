#include <iostream>

#include "carre.h"

using namespace std;

void dessinerCarre()
{
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (y == 0 || x==0 || y == 9 || x ==9)
			{
				cout << " *";
			}
			else
			{
				cout << "  ";
			}
			
		}
		cout << endl;
	}
}