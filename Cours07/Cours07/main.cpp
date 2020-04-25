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

	//Création d'une voiture, et on stocke son adresse dans un pointeur de véhicule
	cVehicule *v = 0;
	v = new cVoiture();

	v->setPrix(15000);

	v->afficher();


	delete v;
	*/




	system("pause");
	return 0;
}


//void sePresenter(cVehicule v)//Résolution statique des liens. Son type determine quelle fonction membre appeler, et non sa vraie nature.
//{
//	v.afficher();
//}

void sePresenter(const cVehicule& v)//La même fonction a plusieurs comportements différents en fonction de son type passé en argument : Polymorphisme. (résolution dynamique des liens)
{
	//On utilise la fonction virtual afficher(), et l'on passe une référence de l'objet en paramètre
	v.afficher();
}