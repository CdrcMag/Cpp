#include "cCamion.h"


void cCamion::setPoids(int poids)
{
	this->m_poids = poids;
}

int cCamion::getPoids() const
{
	return this->m_poids;
}

int cCamion::nbrRoues() const
{
	return 4;
}

cCamion::cCamion() : cVehicule(), m_poids(0)
{

}

cCamion::cCamion(int prix, int poids) : cVehicule(prix), m_poids(poids)
{
}


cCamion::~cCamion()
{
}
