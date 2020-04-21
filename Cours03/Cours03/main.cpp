#include <iostream>
#include <string>

#include "cDuree.h"

using namespace std;

//Prototypes
void sauterLigne(int = 1);

int main(void)
{
	cDuree duree1(3, 32, 50), duree2(12, 2, 21);
	cout << "Duree 1 : ";
	duree1.afficher();
	cout << "Duree 2 : ";
	duree2.afficher();
	sauterLigne();
	
	//---- Test de la surcharge de l'opérateur == -------//

	cout << "Resultat == : " << endl;
	if (duree1 == duree2)
	{
		cout << "Duree1 est egal a duree2";
	}
	else
	{
		cout << "Duree1 n'est pas egal a duree2";
	}
	sauterLigne(2);

	//---- Test de la surcharge de l'opérateur != -------//

	cout << "Resultat != : " << endl;
	if (duree1 != duree2)
	{
		cout << "Duree1 n'est pas egal a duree2";
	}
	else
	{
		cout << "Duree1 est egal a duree2";
	}
	sauterLigne(2);

	//--------- Test de la surcharge de l'opérateur + ---//

	cout << "Total addition : " << endl;
	cDuree totalAddition = duree1 + duree2;
	totalAddition.afficher();
	sauterLigne();

	//---------------------------------------------------//
	//--------- Test de la surcharge de l'opérateur - ---//

	cout << "Total soustraction : " << endl;
	cDuree total = duree1 - duree2;
	total.afficher();
	sauterLigne();

	//--------- Test de la surcharge de l'opérateur += ---//

	cout << "Total += : " << endl;
	cDuree un(10, 20, 23), deux(5, 18, 46);

	cout << "Duree 1 : ";
	un.afficher();
	cout << "Duree 2 : ";
	deux.afficher();

	sauterLigne();
	cout << "Resultat : " << endl;
	un += deux;
	un.afficher();
	sauterLigne(2);

	//Utilisation d'une surcharge d'opérateur de flux
	cout << "Surcharge d'operateur de flux : " << endl;
	cout << duree1;
	sauterLigne(2);

	system("pause");
	return 0;
}


//Fonction pour sauter le nombre de ligne passé en paramètre. Défaut à 1 ligne (facultatif)
void sauterLigne(int a)
{
	for (int i = 0; i <= a; i++)
	{
		cout << endl;
	}
}