#include <iostream>

using namespace std;

//Classe mère
#include "cJeu.h"

//Classes enfants
#include "cHorror.h"
#include "cFPS.h"
#include "cRPG.h"

//Prototypes
void Afficher(const cJeu&);

int main(void)
{
	//Création des objets
	cFPS *pJeuA = new cFPS();
	cHorror *pJeuB = new cHorror();
	cRPG *pJeuC = new cRPG();

	//Affichage de leur genre et place
	Afficher(*pJeuA);
	Afficher(*pJeuB);
	Afficher(*pJeuC);

	//Désallouage des variables
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

//Méthode recevant un cJeu, et retournant la méthode correspondante au type reçu
void Afficher(const cJeu& jeu)
{
	jeu.sePresenter();
}