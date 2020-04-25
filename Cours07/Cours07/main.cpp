#include <iostream>
#include <string>
#include <vector>

#include "cVehicule.h"
#include "cMoto.h"
#include "cVoiture.h"

using namespace std;

//Prototypes
void sePresenter(const cVehicule&);

/*
Notes :
- Le polymorphisme permet de manipuler des objets d'une classe enfant, via des pointeurs/références d'une classe mère. (ex: sePresenter())
- Obligatoire : Méthode virtuelle, et pointeur ou référence sur l'objet
- Une classe possédant une méthode virtuelle pure, est appelée une classe abstraite. Elle n'est pas instanciable.
- Une méthode virtuelle peut être redéfinie dans une classe enfant.
- Une méthode virtuelle pure doit être redéfinie dans toutes les classes enfants.
- Une méthode virtuelle pure est utilisée quand on ne peut rien mettre dans le corps d'une méthode de celle ci.
*/

int main(void)
{
	
	//Création d'une collection hétérogène, techniquement, elle contient plusieurs types. (héritage)
	vector<cVehicule*> listeVehicules;//liste de pointeurs de véhicule

	//Création de véhicules dans la liste
	listeVehicules.push_back(new cVoiture(15000, 3));
	listeVehicules.push_back(new cVoiture(12000, 5));
	listeVehicules.push_back(new cMoto(8000, 215.5));



	listeVehicules[2]->afficher();

	cout << listeVehicules[2]->getAnnee() << endl;



	for (int i = 0; i < listeVehicules.size(); i++)
	{
		delete listeVehicules[i];//Libération de la case mémoire allouée
		listeVehicules[i] = 0;//Reinitialisation du pointeur 
	}



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