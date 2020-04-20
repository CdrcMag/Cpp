#include "CPersonnage.h"



//----- Setters ---------//
void CPersonnage::setVie(int vie)
{

}

void CPersonnage::setMana(int mana)
{

}

void CPersonnage::setNomArme(string nom)
{

}

void CPersonnage::setDegatsArmes(int degats)
{

}


//----- Getters ---------//
int CPersonnage::getVie()
{
	return this->m_vie;
}

int CPersonnage::getMana()
{
	return this->m_mana;
}

string CPersonnage::getNomArme()
{
	return this->m_nomArme;
}

int CPersonnage::getDegatsArme()
{
	return this->m_degatsArme;
}


void CPersonnage::recevoirDegats(int nbDegats)
{

}

void CPersonnage::attaquer(CPersonnage &cible)
{

}

void CPersonnage::boirePotionDeVie(int quantitePotion)
{

}

void CPersonnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{

}

bool CPersonnage::estVivant()
{
	return true;
}

//--- Constructeur ---//
CPersonnage::CPersonnage()
{
	this->m_vie = 0;
	this->m_mana = 0;
	this->m_nomArme = "";
	this->m_degatsArme = 0;
}

CPersonnage::CPersonnage(int vie, int mana, string nomArme, int degats)
{
	this->m_vie = vie;
	this->m_mana = mana;
	this->m_nomArme = nomArme;
	this->m_degatsArme = degats;
}

//--- Destructeur ---//
CPersonnage::~CPersonnage()
{
}
