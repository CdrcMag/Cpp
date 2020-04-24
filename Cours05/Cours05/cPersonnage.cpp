#include "cPersonnage.h"


//---------------------------------------------------------------------------------------//
//
//		Méthode(s) de contrôle
//
//---------------------------------------------------------------------------------------//
void cPersonnage::toString() const
{
	cout << "------- Fiche de " << m_nom << " -------" << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	cout << "Arme : " << m_arme->getNom() << endl;
	cout << "Degats : " << m_arme->getDegats() << endl;
	cout << "---------------------" << endl;
}

//---------------------------------------------------------------------------------------//
//
//		Les méthodes
//
//---------------------------------------------------------------------------------------//

//Fonction qui fait recevoir des degats au personnage courant
void cPersonnage::recevoirDegats(int nbDegats)
{
	this->m_vie -= nbDegats;

	if (this->m_vie < 0)
	{
		this->m_vie = 0;
	}
}

//Fonction qui régénère de la vie
void cPersonnage::boirePotionDeVie(int quantitePotion)
{
	this->m_vie += quantitePotion;

	if (this->m_vie > 100)
	{
		this->m_vie = 100;
	}
}

//Fonction qui attaque un personnage
void cPersonnage::attaquer(cPersonnage &cible)
{
	cible.recevoirDegats(m_arme->getDegats());
}

void cPersonnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

//Booléen qui retourne l'état du personnage
bool cPersonnage::estVivant()
{
	return m_vie > 0;
}

//---------------------------------------------------------------------------------------//
//
//		Les setters
//
//---------------------------------------------------------------------------------------//
void cPersonnage::setNom(string nom)
{
	this->m_nom = nom;
}

void cPersonnage::setVie(int vie)
{
	this->m_vie = vie;
}

void cPersonnage::setMana(int mana)
{
	this->m_mana = mana;
}

//---------------------------------------------------------------------------------------//
//
//		Les getters
//
//---------------------------------------------------------------------------------------//
string cPersonnage::getNom() const
{
	return this->m_nom;
}

int cPersonnage::getVie() const
{
	return this->m_vie;
}

int cPersonnage::getMana() const
{
	return this->m_mana;
}

cArme* cPersonnage::getArme() const
{
	return this->m_arme;
}

//---------------------------------------------------------------------------------------//
//
//		Le(s) surcharge(s)
//
//---------------------------------------------------------------------------------------//
cPersonnage& cPersonnage::operator=(const cPersonnage& original)
{
	if (this != &original)
	{
		//copie de tous les champs
		m_nom = original.m_nom;
		m_vie = original.m_vie;
		m_mana = original.m_mana;
		delete m_arme;//On supprime le pointeur de l'ancienne version de l'objet
		m_arme = new cArme(*(original.m_arme));//On en crée un nouveau avec les valeurs de l'arme passée en objet
	}

	//this est un pointeur sur l'objet courant, *this est une référence sur l'objet courant
	//Donc this est l'adresse de l'objet courant, et *this c'est l'objet
	return *this;
}

//---------------------------------------------------------------------------------------//
//
//		Le(s) constructeur(s)
//
//---------------------------------------------------------------------------------------//
cPersonnage::cPersonnage() : m_nom(""), m_vie(0), m_mana(0), m_arme(0)
{
	m_arme = new cArme();
}

cPersonnage::cPersonnage(string nom, int vie, int mana) : m_nom(nom), m_vie(vie), m_mana(mana), m_arme(0)
{
	m_arme = new cArme();
}

//Constructeur par copie
cPersonnage::cPersonnage(const cPersonnage& perso) : m_nom(perso.m_nom), m_vie(perso.m_vie), m_mana(perso.m_mana), m_arme(0)
{
	//Initialise une nouvelle arme, à partir des valeurs de celle du personnage passé en paramètre 
	m_arme = new cArme(*(perso.m_arme));
}
//---------------------------------------------------------------------------------------//
//
//		Le(s) destructeurs
//
//---------------------------------------------------------------------------------------//
cPersonnage::~cPersonnage()
{
	delete m_arme;
}
