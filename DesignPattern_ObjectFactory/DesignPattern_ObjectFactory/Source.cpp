#include <iostream>
#include <string>

#include "ObjetFactory.h"


using namespace std;

int main()
{
	ObjetFactory *ObjectFactory = new ObjetFactory;

	Objet *object1 = ObjectFactory->Create(1);
	Objet *object2 = ObjectFactory->Create(2);
	Objet *object3 = ObjectFactory->Create(2);
	Objet *object4 = ObjectFactory->Create(1);

	cout << object1->Operation() << endl;
	cout << object2->Operation() << endl;
	cout << object3->Operation() << endl;
	cout << object4->Operation() << endl;

	delete object1;
	delete object2;
	delete object3;
	delete object4;
	delete ObjectFactory;


	system("pause");
	return 0;
}