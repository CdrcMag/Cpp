#include "CPersonnage.h"

//------ Controle -------//
void CPersonnage::toString()
{
	cout << "------- Fiche de " << getNom() << " -------" << endl;
	cout << "Vie : " << getVie() << endl;
	cout << "Mana : " << getMana() << endl;
	cout << "Nom de l'arme : " << getNomArme() << endl;
	cout << "Degats : " << getDegatsArme() << endl;
	cout << "---------------------" << endl;
}

//----- Setters ---------//
void CPersonnage::setNom(string nom)
{
	this->m_nom = nom;
}

void CPersonnage::setVie(int vie)
{
	this->m_vie = vie;
}

void CPersonnage::setMana(int mana)
{
	this->m_mana = mana;
}

void CPersonnage::setNomArme(string nom)
{
	this->m_nomArme = nom;
}

void CPersonnage::setDegatsArmes(int degats)
{
	this->m_degatsArme = degats;
}


//----- Getters ---------//
string CPersonnage::getNom()
{
	return this->m_nom;
}

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


//Fonction qui fait recevoir des degats au personnage courant
void CPersonnage::recevoirDegats(int nbDegats)
{
	this->m_vie -= nbDegats;

	if (this->m_vie < 0)
	{
		this->m_vie = 0;
	}
}

//Fonction qui attaque un personnage
void CPersonnage::attaquer(CPersonnage &cible)
{
	cible.recevoirDegats(this->m_degatsArme);
}

//Fonction qui régénère de la vie
void CPersonnage::boirePotionDeVie(int quantitePotion)
{
	this->m_vie += quantitePotion;

	if (this->m_vie > 100)
	{
		this->m_vie = 100;
	}
}

//Fonction qui permet de changer d'arme (nom et dégats)
void CPersonnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	this->m_nomArme = nomNouvelleArme;
	this->m_degatsArme = degatsNouvelleArme;
}


//Booléen qui retourne l'état du personnage
bool CPersonnage::estVivant()
{
	return m_vie > 0;
}

//--- Constructeur ---//
CPersonnage::CPersonnage()
{
	this->m_nom = "";
	this->m_vie = 0;
	this->m_mana = 0;
	this->m_nomArme = "";
	this->m_degatsArme = 0;
}

//Constructeur avec initialisation
CPersonnage::CPersonnage(string nom, int vie, int mana, string nomArme, int degats)
{
	this->m_nom = nom;
	this->m_vie = vie;
	this->m_mana = mana;
	this->m_nomArme = nomArme;
	this->m_degatsArme = degats;
}

//--- Destructeur ---//
CPersonnage::~CPersonnage()
{
}
