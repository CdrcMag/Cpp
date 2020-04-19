#include <iostream>
#include <vector>

#include "carre.h"
#include "fonctionsTest.h"
#include "tableaux.h"


using namespace std;


int main()
{
















	//-------------------- Utilisation de fonctions tableaux ---------------//
	//vector<int> tab(10);

	//afficher(tab);

	//randomInit_adresse(tab);
	//randomInit_valeur(tab);


	//afficher(tab);
	//-----------------------------------------------------------------------//

	//----------------- Moyenne -------------------//
	//vector<double> notes;

	//notes.push_back(13);
	//notes.push_back(8);
	//notes.push_back(7.5);
	//notes.push_back(18.3);

	//float result = 0;

	//for (int i = 0; i < notes.size(); i++)
	//{
	//	result += notes[i];
	//}

	//result = result / notes.size();

	//cout << "Votre moyenne est de : " << result << endl;
	//--------------------------------------------------//



	system("pause");
	return 0;
}

//void nom(int a) = passage par valeur
//-> Copie la valeur, prend une case mémoire en plus, donc peu performant

//void nom(int& a) = passage par adresse
//-> On peut changer la valeur passée

//void nom(int const& a) = passage par adresse constante
//-> Moyen performant, on ne peut pas changer la valeur