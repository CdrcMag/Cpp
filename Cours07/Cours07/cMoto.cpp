#include "cMoto.h"


void cMoto::afficher() const
{
	cout << "Ceci est une moto a " << m_prix << "euros, et a une vitesse de " << m_vitesse << "km/h" << endl;
}

double cMoto::getVitesse() const
{
	return this->m_vitesse;
}

void cMoto::setVitesse(double vitesse)
{
	this->m_vitesse = vitesse;
}

int cMoto::nbrRoues() const
{
	return 2;
}


cMoto::cMoto() : cVehicule(), m_vitesse(0)
{
}

cMoto::cMoto(int prix, double vitesse) : cVehicule(prix), m_vitesse(vitesse)
{
}


cMoto::~cMoto()
{
}
