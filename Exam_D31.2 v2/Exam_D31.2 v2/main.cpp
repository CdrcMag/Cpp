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

int main(void)
{
	//D�claration des objets
	cHorror *a = new cHorror();
	cRPG *b = new cRPG();
	cFPS *c = new cFPS();

	//Affichage des objets 
	afficher(*a);
	afficher(*b);
	afficher(*c);

	//D�sallocation des pointeurs
	delete a;
	delete b;
	delete c;
	a = nullptr;
	b = nullptr;
	c = nullptr;

	cout << endl;
	system("pause");
	return 0;
}

//M�thode � caract�re polymorphique, recevant l'adresse d'un cJeu en argument, et appelle la m�thode de l'objet correspondant
void afficher(const cJeu& jeu)
{
	jeu.sePresenter();
}