#pragma once

#include <string>
#include <iostream>

using namespace std;

class CPersonnage
{

private:
	string m_nom;
	int m_vie;
	int m_mana;
	string m_nomArme;
	int m_degatsArme;

public:

	//Méthodes du personnage
	void recevoirDegats(int);
	void attaquer(CPersonnage&);
	void boirePotionDeVie(int);
	void changerArme(string, int);
	bool estVivant();

	//Controle
	void toString();

	//Setters
	void setNom(string);
	void setVie(int);
	void setMana(int);
	void setNomArme(string);
	void setDegatsArmes(int);


	//Getters
	string getNom();
	int getVie();
	int getMana();
	string getNomArme();
	int getDegatsArme();


	//Constructeur
	CPersonnage();
	CPersonnage(string, int, int, string, int);

	//Destructeur
	~CPersonnage();





};

