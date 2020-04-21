#include "cDuree.h"



cDuree::cDuree() : m_heures(0), m_minutes(0), m_secondes(0)
{

}

cDuree::cDuree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{

}


cDuree::~cDuree()
{
}


void cDuree::afficher() const
{
	cout << "Heures : " << this->m_heures << " / Minutes : " << this->m_minutes << " / Secondes : " << this->m_secondes << endl;
}




//Setters
void cDuree::setHeures(int h)
{
	this->m_heures = h;
}

void cDuree::setMinutes(int m)
{
	this->m_minutes = m;
}
void cDuree::setSecondes(int s)
{
	this->m_secondes = s;
}

//Getters
int cDuree::getHeures() const
{
	return this->m_heures;
}
int cDuree::getMinutes() const
{
	return this->m_minutes;
}
int cDuree::getSecondes() const
{
	return this->m_secondes;
}
