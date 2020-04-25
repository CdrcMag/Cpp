#include "cVehicule.h"



void cVehicule::afficher() const
{
	cout << "Ceci est un vehicule qui coute " << m_prix << endl;
}


//Getters
int cVehicule::getPrix() const
{
	return this->m_prix;
}

//Setters
void cVehicule::setPrix(int prix)
{
	this->m_prix = prix;
}



cVehicule::cVehicule() : m_prix(0)
{

}

cVehicule::cVehicule(int prix) : m_prix(prix)
{

}

cVehicule::~cVehicule()
{
}
