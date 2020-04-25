#include "cMoto.h"


void cMoto::afficher() const
{
	cout << "Ceci est une moto a " << m_prix << " et a une vitesse de " << m_vitesse << endl;
}

double cMoto::getVitesse() const
{
	return this->m_vitesse;
}

void cMoto::setVitesse(double vitesse)
{
	this->m_vitesse = vitesse;
}



cMoto::cMoto() : m_vitesse(0)
{
}

cMoto::cMoto(int prix, double vitesse) : cVehicule(prix), m_vitesse(vitesse)
{
}


cMoto::~cMoto()
{
}
