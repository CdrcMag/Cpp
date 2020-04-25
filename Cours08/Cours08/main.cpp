#include <iostream>
#include <string>

#include "cMaClasse.h"
#include "cDuree.h"

/*
	Notes : 
	- Déclarer une fonction amie d'une classe, c'est lui donner accès à tous ses membres.
	- Une fonction amie ne doit pas, en principe, modifier l'instance de la classe
	- Les fonctions amies ne doivent être utilisées que si vous ne pouvez pas faire autrement.
	- Un attribut statique est partagé par tous les objets issus d'une même classe.

*/
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

	cDuree a(12, 50, 13);

	cout << a;



	system("pause");
	return 0;
}