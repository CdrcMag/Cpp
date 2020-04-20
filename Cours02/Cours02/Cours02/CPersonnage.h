#pragma once

#include <string>

using namespace std;

class CPersonnage
{

private:
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

	//Setters
	void setVie(int);
	void setMana(int);
	void setNomArme(string);
	void setDegatsArmes(int);


	//Getters
	int getVie();
	int getMana();
	string getNomArme();
	int getDegatsArme();


	//Constructeur
	CPersonnage();
	CPersonnage(int, int, string, int);

	//Destructeur
	~CPersonnage();





};

