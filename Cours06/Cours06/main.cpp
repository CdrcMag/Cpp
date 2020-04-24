#include <iostream>

#include "cPersonnage.h"
#include "cGuerrier.h"


using namespace std;

int main(void)
{
	
	cPersonnage monPersonnage;
	cGuerrier monGuerrier;

	monPersonnage.coupDePoing(monGuerrier);
	monGuerrier.coupDePoing(monPersonnage);

	//la m�thode coupDePoing attend la r�f�rence d'un personnage. 
	//On peut substituer un objet fille par un objet m�re

	cPersonnage *pPerso = 0;
	cGuerrier *pGuerrier = new cGuerrier();

	pPerso = pGuerrier; // On peut affecter un �l�ment enfant � un �l�ment parent.

	//Lorsque l'on cr�e un objet enfant de classe, le compilateur appelle d'abord le constructeur par d�faut
	//de la classe m�re, puis celui de l'enfant (et petit enfant, etc)

	cGuerrier a;

	//On peut passer en param�tres des informations � partir de l'enfant, il faut alors surcharger le constructeur du parent et de l'enfant

	//les �l�ments en protected ne sont pas accessibles en dehors de la classe, sauf par des classes filles

	//Le masquage : quand on �crit une fonction qui a le m�me nom que celle h�rit�e de la classe m�re, on parle de masquage.

	cout << "----------------" << endl;
	monPersonnage.sePresenter();
	cout << "----------------" << endl;
	monGuerrier.sePresenter();






	system("pause");
	return 0;
}