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

	//la méthode coupDePoing attend la référence d'un personnage. 
	//On peut substituer un objet fille par un objet mère

	cPersonnage *pPerso = 0;
	cGuerrier *pGuerrier = new cGuerrier();

	pPerso = pGuerrier; // On peut affecter un élément enfant à un élément parent.

	//Lorsque l'on crée un objet enfant de classe, le compilateur appelle d'abord le constructeur par défaut
	//de la classe mère, puis celui de l'enfant (et petit enfant, etc)

	cGuerrier a;

	//On peut passer en paramètres des informations à partir de l'enfant, il faut alors surcharger le constructeur du parent et de l'enfant

	//les éléments en protected ne sont pas accessibles en dehors de la classe, sauf par des classes filles

	//Le masquage : quand on écrit une fonction qui a le même nom que celle héritée de la classe mère, on parle de masquage.

	cout << "----------------" << endl;
	monPersonnage.sePresenter();
	cout << "----------------" << endl;
	monGuerrier.sePresenter();






	system("pause");
	return 0;
}