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
- Le polymorphisme permet de manipuler des objets d'une classe enfant, via des pointeurs/r�f�rences d'une classe m�re. (ex: sePresenter())
- Obligatoire : M�thode virtuelle, et pointeur ou r�f�rence sur l'objet
- Une classe poss�dant une m�thode virtuelle pure, est appel�e une classe abstraite. Elle n'est pas instanciable.
- Une m�thode virtuelle peut �tre red�finie dans une classe enfant.
- Une m�thode virtuelle pure doit �tre red�finie dans toutes les classes enfants.
- Une m�thode virtuelle pure est utilis�e quand on ne peut rien mettre dans le corps d'une m�thode de celle ci.
*/

int main(void)
{
	
	//Cr�ation d'une collection h�t�rog�ne, techniquement, elle contient plusieurs types. (h�ritage)
	vector<cVehicule*> listeVehicules;//liste de pointeurs de v�hicule

	//Cr�ation de v�hicules dans la liste
	listeVehicules.push_back(new cVoiture(15000, 3));
	listeVehicules.push_back(new cVoiture(12000, 5));
	listeVehicules.push_back(new cMoto(8000, 215.5));



	listeVehicules[2]->afficher();

	cout << listeVehicules[2]->getAnnee() << endl;



	for (int i = 0; i < listeVehicules.size(); i++)
	{
		delete listeVehicules[i];//Lib�ration de la case m�moire allou�e
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