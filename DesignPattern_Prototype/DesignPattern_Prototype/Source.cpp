#include <stdio.h>
#include <iostream>
#include <string.h>

#include "Adresse.h"
#include "Employe.h"

using namespace std;

static Adresse Londres("123 East Dr", "Londres", 123);
static Adresse Strasbourg("158 rue des Tomates", "Strasbourg", 158);

int main() 
{
	//On utilise les objets "Adresse", déclarés plus tôt, pour construire des objets "Employé".
	//Ces employés travaillent à une adresse, plusieurs employés peuvent donc avoir le même lieu de travail.
	//On utilise donc ces objets déjà initialisés pour construire de nouveaux objets, au lieu de 
	//les construire entièrement.
	//Pour des objets plus complexes, cette méthode est plus performante et permet une libération conséquente de la mémoire.

	Employe paul{ "Paul Dupont", &Londres };
	Employe kevin{ "Jean Michel", &Strasbourg };

	cout << paul << endl;
	cout << kevin << endl;

	system("pause");
	return 0;
}