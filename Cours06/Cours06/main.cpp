#include <iostream>

#include "cPersonnage.h"
#include "cGuerrier.h"


using namespace std;

int main(void)
{
	
	cPersonnage monPersonnage;
	cGuerrier monGuerrier;

	monPersonnage.coupDePoing(monGuerrier);
	monGuerrier.coupDePoing(monPersonnage);

	//la m�thode coupDePoing attend la r�f�rence d'un personnage. 
	//On peut substituer un objet fille par un objet m�re

	cPersonnage *pPerso = 0;
	cGuerrier *pGuerrier = new cGuerrier();

	pPerso = pGuerrier; // On peut affecter un �l�ment enfant � un �l�ment parent.






	system("pause");
	return 0;
}