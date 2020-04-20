#pragma once

#include <string>
#include <iostream>

#include "CArme.h"

using namespace std;

class CPersonnage
{

private:
	string m_nom;
	int m_vie;
	int m_mana;
	CArme m_arme;

public:

	//Méthodes du personnage
	void recevoirDegats(int);
	void attaquer(CPersonnage&);
	void boirePotionDeVie(int);
	void changerArme(string, int);
	bool estVivant();

	//Controle
	void toString() const;

	//Setters
	void setNom(string);
	void setVie(int);
	void setMana(int);
	void setArme(string, int);


	//Getters
	string getNom() const;
	int getVie() const;
	int getMana() const;
	CArme getArme() const;


	//Constructeur
	CPersonnage();
	CPersonnage(string);
	CPersonnage(string, int);
	CPersonnage(string, int, int, string, int);

	//Destructeur
	~CPersonnage();





};

