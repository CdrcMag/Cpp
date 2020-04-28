#include <iostream>

//Classe m�re
class cJeu;//forward declaration

//Classes filles
#include "cHorror.h"
#include "cRPG.h"
#include "cFPS.h"

using namespace std;

//Prototypes
void afficher(const cJeu&);
void afficherTotalObjet();

int main(void)
{
	//D�claration des objets
	cout << "-- Creation des objets. --" << endl;
	cHorror *a = new cHorror();
	cRPG *b = new cRPG();
	cFPS *c = new cFPS();

	//Affiche le nombre total d'objets
	afficherTotalObjet();
	cout << endl;

	//Affichage des objets 
	cout << "-- Affichage des objets. --" << endl;
	afficher(*a);
	afficher(*b);
	afficher(*c);
	cout << endl;

	//D�sallocation des pointeurs
	cout << "-- Suppression des objets. --" << endl;
	delete a;
	delete b;
	delete c;
	a = nullptr;
	b = nullptr;
	c = nullptr;


	//Affiche le nombre total d'objets
	afficherTotalObjet();

	cout << endl;
	system("pause");
	return 0;
}

//M�thode � caract�re polymorphique, recevant l'adresse d'un cJeu en argument, et appelle la m�thode de l'objet correspondant
void afficher(const cJeu& jeu)
{
	jeu.sePresenter();
}

//M�thode affichant le total d'objets
void afficherTotalObjet()
{
	cout << "Il y a " << cJeu::getTotalInstance() << " objet(s) en ce moment." << endl;
}