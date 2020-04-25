#include "cVoiture.h"



int cVoiture::getPortes() const
{
	return this->m_portes;
}


void cVoiture::setPortes(int portes)
{
	this->m_portes = portes;
}

void cVoiture::afficher() const
{
	cout << "Ceci est une voiture qui coute " << m_prix << " et a " << m_portes << " portes." << endl;
}




cVoiture::cVoiture() : m_portes(0)
{
}

cVoiture::cVoiture(int prix, int portes)  : cVehicule(prix), m_portes(portes)
{
}

cVoiture::~cVoiture()
{
}
