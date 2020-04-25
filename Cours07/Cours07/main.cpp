#include <iostream>
#include <string>

#include "cVehicule.h"
#include "cMoto.h"
#include "cVoiture.h"

using namespace std;

//Prototypes
void sePresenter(const cVehicule&);

int main(void)
{




















	/*
	cVehicule v;
	sePresenter(v);

	//Utilisation du masquage
	cMoto m;
	sePresenter(m);

	cVoiture voi;
	sePresenter(voi);

	//Cr�ation d'une voiture, et on stocke son adresse dans un pointeur de v�hicule
	cVehicule *v = 0;
	v = new cVoiture();

	v->setPrix(15000);

	v->afficher();


	delete v;
	*/




	system("pause");
	return 0;
}


//void sePresenter(cVehicule v)//R�solution statique des liens. Son type determine quelle fonction membre appeler, et non sa vraie nature.
//{
//	v.afficher();
//}

void sePresenter(const cVehicule& v)//La m�me fonction a plusieurs comportements diff�rents en fonction de son type pass� en argument : Polymorphisme. (r�solution dynamique des liens)
{
	//On utilise la fonction virtual afficher(), et l'on passe une r�f�rence de l'objet en param�tre
	v.afficher();
}