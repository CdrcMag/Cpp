#include <iostream>


#include "CopieDeTableaux.h"

#include "cPersonnage.h"
#include "cArme.h"

using namespace std;



int main(void)
{
	/* Exo sur le constructeur par copie et surcharge de l'opérateur = */

	cPersonnage persoUn("Paul", 150, 300);
	persoUn.getArme()->setNom("Massue");

	cout << "Adresses de m_nom des deux personnages. Perso B est une copie de perso A. (constructeur par copie)" << endl;
	cout << "Arme perso un : " << persoUn.getArme()->getNom() << " et a l'adresse " << &(persoUn.getArme()->getNom()) << endl;

	//Utilisation du constructeur par copie
	cPersonnage persoDeux(persoUn);

	cout << "Arme perso deux : " << persoDeux.getArme()->getNom() << " et a l'adresse " << &(persoDeux.getArme()->getNom()) << endl;

	cPersonnage persoTrois;

	//Utilisation de la surcharge d'opérateur =, il va de paire avec le constructeur par copie.
	persoTrois = persoDeux;
	persoTrois.toString();





	
	/*

	//NOTES :

	int a = 5;
	int *pA = &a;

	cout << "Valeur de a : " << a << endl;
	cout << "Adresse de a : " << &a << endl;
	cout << "*pA (valeur de a) : " << *pA << endl;
	cout << "pA (adresse de a): " << pA << endl;
	cout << "&pA (adresse du pointeur de a) : " << &pA << endl;

	//this retourne l'adresse de l'objet courant, *this retourne l'objet courant
	*/

	
	/* Exo 1 : Créer deux tableaux, les éléments de 1 sont aléatoires, copier les éléments positifs de 1 dans 2, en remplaçant les trous par des 0*/

	/*

	//1. Créer les tableaux
	int original[TAILLE];
	int rendu[TAILLE];

	//2. Initialiser les tableaux. Générer les chiffres random dans 1 avec des chiffres négatifs
	srand(time(0));//Initialise un aléatoire en fonction du temps
	GenererRandom(original);
	InitTab(rendu);

	//3. Afficher le tableau 1
	AfficherTableau(original);

	//4. Copier les chiffres positifs de 1 dans 2 en faisant attention à remplacer les négatifs par 0
	CopierValeurPositives(original, rendu);

	//5. Afficher le 2ème tableau
	AfficherTableau(rendu);

	*/


	system("pause");
	return 0;
}


