#include "cDuree.h"

//--------- Surcharge des opérateurs -----------//
bool operator==(cDuree const& a, cDuree const& b)
{
	if (a.getHeures() == b.getHeures() && a.getMinutes() == b.getMinutes() && a.getSecondes() == b.getSecondes())
	{
		return true;
	}
	else
	{
		return false;
	}
}

cDuree operator+(cDuree const& a, cDuree const& b)
{
	cDuree duree(a.getHeures() + b.getHeures(), a.getMinutes() + b.getMinutes(), a.getSecondes() + b.getSecondes());

	return duree;
}

cDuree operator-(cDuree const& a, cDuree const& b)
{
	cDuree duree(a.getHeures() - b.getHeures(), a.getMinutes() - b.getMinutes(), a.getSecondes() - b.getSecondes());

	return duree;
}

bool operator!=(cDuree const& a, cDuree const& b)
{
	if (a.getHeures() != b.getHeures() || a.getMinutes() != b.getMinutes() || a.getSecondes() != b.getSecondes())
	{
		return true;
	}
	else
	{
		return false;
	}
}

//Surcharge de l'opérateur += dans la classe, pour avoir accès aux membres ayant besoin d'être modifiés
void cDuree::operator+=(cDuree const& a)
{
	this->m_heures += a.getHeures();
	this->m_minutes += a.getMinutes();
	this->m_secondes += a.getSecondes();
}

//Surcharge de l'opérateur de flux, pour pouvoir afficher avec cout << l'objet. On appelle la fonction display, qui modifie l'ostream, et l'opérateur le renvoie.
ostream& operator<<(ostream &flux, cDuree const& duree)
{
	duree.display(flux);
	return flux;
}

void cDuree::display(ostream &flux) const
{
	//flux est un surnom de cout, pour éviter les conflits
	flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s";
}

//----------------------------//
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
