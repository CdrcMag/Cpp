#include <iostream>

using namespace std;

//Classe m�re
#include "cJeu.h"

//Classes enfants
#include "cHorror.h"
#include "cFPS.h"
#include "cRPG.h"

//Prototypes
void Afficher(const cJeu&);

int main(void)
{
	//Cr�ation des objets
	cFPS *pJeuA = new cFPS();
	cHorror *pJeuB = new cHorror();
	cRPG *pJeuC = new cRPG();

	//Affichage de leur genre et place
	Afficher(*pJeuA);
	Afficher(*pJeuB);
	Afficher(*pJeuC);

	//D�sallouage des variables
	delete pJeuA;
	delete pJeuB;
	delete pJeuC;
	pJeuA = 0;
	pJeuB = 0;
	pJeuC = 0;

	cout << endl;
	system("pause");
	return 0;
}

//M�thode recevant un cJeu, et retournant la m�thode correspondante au type re�u
void Afficher(const cJeu& jeu)
{
	jeu.sePresenter();
}