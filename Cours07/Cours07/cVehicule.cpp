#include "cVehicule.h"



void cVehicule::afficher() const
{
	cout << "Ceci est un vehicule et coute " << m_prix << endl;
}

//int cVehicule::nbrRoues() const
//{
//	//On a besoin de cette méthode ici, sinon on ne peut pas l'utiliser depuis les enfants. (méthode virtuelle, résultat différent en fonction des arguments donnés)
//}


//Getters
int cVehicule::getPrix() const
{
	return this->m_prix;
}

int cVehicule::getAnnee() const
{
	return this->m_annee;
}

//Setters
void cVehicule::setPrix(int prix)
{
	this->m_prix = prix;
}

void cVehicule::setAnnee(int annee)
{
	this->m_annee = annee;
}



cVehicule::cVehicule() : m_prix(0), m_annee(2000)
{

}

cVehicule::cVehicule(int prix) : m_prix(prix), m_annee(2000)
{

}

cVehicule::~cVehicule()
{
}
