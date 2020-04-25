#include <iostream>
#include <string>

#include "cMaClasse.h"
#include "cDuree.h"

/*
	Notes : 
	- D�clarer une fonction amie d'une classe, c'est lui donner acc�s � tous ses membres.
	- Une fonction amie ne doit pas, en principe, modifier l'instance de la classe
	- Les fonctions amies ne doivent �tre utilis�es que si vous ne pouvez pas faire autrement.
	- Un attribut statique est partag� par tous les objets issus d'une m�me classe.

*/
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

	cDuree a(12, 50, 13);

	cout << a;



	system("pause");
	return 0;
}