#pragma once

#include <string>
#include <iostream>

#include "cArme.h"

using namespace std;


class cPersonnage
{
private:

	string m_nom;
	int m_vie;
	int m_mana;

	cArme *m_arme;


public:

	//Méthodes du personnage
	void recevoirDegats(int);
	void boirePotionDeVie(int);
	bool estVivant();

	void changerArme(string, int);
	void attaquer(cPersonnage&);

	//Controle
	void toString() const;

	//Setters
	void setNom(string);
	void setVie(int);
	void setMana(int);

	//Getters
	string getNom() const;
	int getVie() const;
	int getMana() const;
	cArme* getArme() const;

	//Surcharge de l'opérateur =
	cPersonnage& operator=(const cPersonnage&);

	//Constructeurs
	cPersonnage();
	cPersonnage(const cPersonnage&);
	cPersonnage(string, int, int);//nom, vie, mana

	//Destructeur
	~cPersonnage();
};


