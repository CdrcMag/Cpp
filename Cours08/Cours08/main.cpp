#include <iostream>
#include <string>

#include "cMaClasse.h"

int main(void)
{
	//Une m�thode statique dans une classe est appel�e sans avoir instanci� d'objet avant.
	//La m�thode n'a pas acc�s aux attributs de la classe.
	cMaClasse::maMethode();

	cMaClasse instanceA;
	cMaClasse instanceB;
	cMaClasse instanceC;
	cMaClasse instanceD;

	cout << "Nombre d'objets : " << cMaClasse::nbr_instance() << endl;



	system("pause");
	return 0;
}