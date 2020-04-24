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

	//la méthode coupDePoing attend la référence d'un personnage. 
	//On peut substituer un objet fille par un objet mère

	cPersonnage *pPerso = 0;
	cGuerrier *pGuerrier = new cGuerrier();

	pPerso = pGuerrier; // On peut affecter un élément enfant à un élément parent.






	system("pause");
	return 0;
}