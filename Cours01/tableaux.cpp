#include "tableaux.h"

#include <iostream>


//Affiche le tableau pass� en param�tre. Utilise un passage par adresse constante
void afficher(vector<int> const& a)
{
	cout << "--------------------------------------------" << endl;
	for (int i = 0; i < a.size(); i++)
	{
		cout << i << " : " << a[i] << endl;
	}
}

//Initialise � une valeur al�atoire les cases du tableau
void randomInit_adresse(vector<int>& tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		tab[i] = rand() % 101;
	}
}

//Initialise � une valeur al�atoire les cases du tableau
void randomInit_valeur(vector<int> tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		tab[i] = rand() % 101;
	}
}