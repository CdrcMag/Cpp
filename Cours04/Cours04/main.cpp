#include <iostream>
#include "cFraction.h"

using namespace std;

int main(void)
{

	cFraction a(4,5);
	cFraction b(2);
	cFraction c,d;        

	c = a + b;

	d = a * b;

	cout << a << " + " << b << " = " << c << endl;

	cout << a << " * " << b << " = " << d << endl;

	if(a > b)
		cout << "a est plus grand que b." << endl;
	else if(a==b)
		cout << "a est egal a b." << endl;
	else
		cout << "a est plus petit que b." << endl;
	


	system("pause");
	return 0;
}