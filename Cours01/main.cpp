#include <iostream>
#include <vector>
#include <fstream>
#include <string>

#include "carre.h"
#include "fonctionsTest.h"
#include "tableaux.h"
#include "MotMystere.h"

using namespace std;


int main()
{
	//--------------- mot myst�re ----------------------------------------//
	
	////1. On r�cup�re le mot
	//string motRecu = "";
	//string motMelange = "";
	//string chaine;
	//cout << "Veuillez entrer votre mot : " << endl;
	//cin >> motRecu;

	////2. On m�lange le mot
	//motMelange = melangerMot(motRecu);

	////On efface la console
	//system("CLS");

	////3. On demande en boucle le mot jusqu'a ce qu'il soit bon.
	//while (chaine != motRecu)
	//{
	//	cout << "Mot a trouver : " << motMelange << endl;

	//	cout << "Quel est le mot ? " << endl;
	//	cin >> chaine;
	//	if (chaine == motRecu)
	//	{
	//		cout << "Bravo !" << endl;
	//	}
	//	else
	//	{
	//		system("CLS");
	//		cout << "Non, on ne fait pas ca ici" << endl;
	//		
	//	}
	//}
	//--------------------------------------------------------------------//


	//--------- Les fichiers --------------------------------------------------//
	//string const nomFichier = "Fichiers/monFichier.txt";

	////Ouerture du flux pour �crire
	//ofstream monFlux(nomFichier.c_str(), ios::app);//Ouvre en mode append
	//ofstream monFlux(nomFichier.c_str());//Recr�er enti�rement le fichier
	////tellp pour r�cup la pos du pointeur
	////seekp pour se d�placer
	//if (monFlux) 
	//{
	//	monFlux << "Le seigneur des anneaux c'est sympa" << endl;

	//}
	//else
	//{
	//	cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
	//}

	////Trois fa�ons de se d�placer : 
	///*	flux.seekp(nombreCaracteres, ios::MODE);
	//	- ios::beg -> pour se mettre au d�but du fichier
	//	- ios::end -> pour se mettre � la fin du fichier
	//	- ios:cur -> pour se mettre au niveau du curseur
	//
	//*/


	//ifstream monFluxLecture(nomFichier);
	////tellg pour r�cup la pos du pointeur
	////seekg pour se d�placer
	//if (monFluxLecture)
	//{
	//	string lineOne;

	//	//A besoin de #include <string>
	//	getline(monFluxLecture, lineOne);

	//	cout << lineOne << endl;

	//}
	//else
	//{
	//	cout << "ERREUR de lecture" << endl;
	//}

	////Fermeture des flux
	//monFlux.close();
	//monFluxLecture.close();
	//------------------------------------------------------------------------//



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
//-> Copie la valeur, prend une case m�moire en plus, donc peu performant

//void nom(int& a) = passage par adresse
//-> On peut changer la valeur pass�e

//void nom(int const& a) = passage par adresse constante
//-> Moyen performant, on ne peut pas changer la valeur