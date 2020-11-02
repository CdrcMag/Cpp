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
	//On utilise les objets "Adresse", d�clar�s plus t�t, pour construire des objets "Employ�".
	//Ces employ�s travaillent � une adresse, plusieurs employ�s peuvent donc avoir le m�me lieu de travail.
	//On utilise donc ces objets d�j� initialis�s pour construire de nouveaux objets, au lieu de 
	//les construire enti�rement.
	//Pour des objets plus complexes, cette m�thode est plus performante et permet une lib�ration cons�quente de la m�moire.

	Employe paul{ "Paul Dupont", &Londres };
	Employe kevin{ "Jean Michel", &Strasbourg };

	cout << paul << endl;
	cout << kevin << endl;

	system("pause");
	return 0;
}