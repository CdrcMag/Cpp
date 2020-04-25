#include <iostream>
#include <string>

#include "cMaClasse.h"

int main(void)
{
	//Une méthode statique dans une classe est appelée sans avoir instancié d'objet avant.
	//La méthode n'a pas accès aux attributs de la classe.
	cMaClasse::maMethode();

	cMaClasse instanceA;
	cMaClasse instanceB;
	cMaClasse instanceC;
	cMaClasse instanceD;

	cout << "Nombre d'objets : " << cMaClasse::nbr_instance() << endl;



	system("pause");
	return 0;
}