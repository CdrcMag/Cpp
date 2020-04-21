#include <iostream>
#include "cFraction.h"

using namespace std;

int main(void)
{
	
	cFraction a(4, 5);      //Déclare une fraction valant 4/5
	cFraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
	cFraction c, d;         //Déclare deux fractions valant 0

	cout << "a : " << a << endl;
	cout << "b : " << b << endl;
	
	c = a + b;               //Calcule 4/5 + 2/1 = 14/5

	//cout << "c : " << c << endl;



	/*
	ZFraction a(4,5);      //Déclare une fraction valant 4/5
	ZFraction b(2);        //Déclare une fraction valant 2/1 (ce qui vaut 2)
	ZFraction c,d;         //Déclare deux fractions valant 0

	c = a+b;               //Calcule 4/5 + 2/1 = 14/5

	d = a*b;               //Calcule 4/5 * 2/1 = 8/5

	cout << a << " + " << b << " = " << c << endl;

	cout << a << " * " << b << " = " << d << endl;

	if(a > b)
		cout << "a est plus grand que b." << endl;
	else if(a==b)
		cout << "a est egal a b." << endl;
	else
		cout << "a est plus petit que b." << endl;
	*/






	system("pause");
	return 0;
}