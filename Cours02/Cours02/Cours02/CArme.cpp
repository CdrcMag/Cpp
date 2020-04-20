#include "CArme.h"


//----- Constructeurs -----------//
CArme::CArme()
{

}

CArme::CArme(string nom, int degats) : m_nom(nom), m_degats(degats)
{

}

void CArme::changer(string nom, int degats)
{

	this->m_nom = nom;
	this->m_degats = degats;
}

//----- Controle -------//
void CArme::afficher() const
{
	cout << "Nom de l'arme  : " << this->m_nom << endl;
	cout << "Degats de l'arme  : " << this->m_degats << endl;
}


//----- Setters ----//
void CArme::setNom(string nom)
{
	this->m_nom = nom;
}
void CArme::setDegats(int degats)
{
	this->m_degats = degats;
}

//----- Getters ------//
string CArme::getNom() const
{
	return this->m_nom;
}
int CArme::getDegats() const
{
	return this->m_degats;
}

CArme::~CArme()
{
}
