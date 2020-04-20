#include "CPersonnage.h"

//------ Controle -------//
//Méthode constante, elle ne change aucune valeur membre, le mot clé 'const' est appiliqué à la fin de son prototype et ici
void CPersonnage::toString() const
{
	cout << "------- Fiche de " << m_nom << " -------" << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	cout << "Nom de l'arme : " << m_arme.getNom() << endl;
	cout << "Degats : " << m_arme.getDegats() << endl;
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

void CPersonnage::setArme(string nom, int degats)
{
	this->m_arme.setDegats(degats);
	this->m_arme.setNom(nom);
}

//----- Getters ---------//
string CPersonnage::getNom() const
{
	return this->m_nom;
}

int CPersonnage::getVie() const
{
	return this->m_vie;
}

int CPersonnage::getMana() const
{
	return this->m_mana;
}

CArme CPersonnage::getArme() const
{
	return this->m_arme;
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
	cible.recevoirDegats(this->getArme().getDegats());
}

void CPersonnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
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


//Booléen qui retourne l'état du personnage
bool CPersonnage::estVivant()
{
	return m_vie > 0;
}

//--- Constructeurs ---//
CPersonnage::CPersonnage() : m_nom("NomDeBase"), m_vie(100), m_mana(100), m_arme("", 0)
{
	
}

CPersonnage::CPersonnage(string nomArme, int degats) : m_nom("NomDeBase"), m_vie(100), m_mana(100), m_arme("", 0)
{

}


//Constructeur qui ne prend que le nom du personnage en argument
CPersonnage::CPersonnage(string nom) : m_nom(nom), m_vie(100), m_mana(100), m_arme("", 0)
{

}

//Constructeur avec initialisation
CPersonnage::CPersonnage(string nom, int vie, int mana, string nomArme, int degats) : m_arme(nomArme, degats)
{
	this->m_nom = nom;
	this->m_vie = vie;
	this->m_mana = mana;
	
}



//--- Destructeur ---//
CPersonnage::~CPersonnage()
{
}
