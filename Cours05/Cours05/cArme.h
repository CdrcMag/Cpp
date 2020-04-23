#pragma once

#include <string>
#include <iostream>

using namespace std;

class cArme
{

private:

	string m_nom;
	int m_degats;



public:


	//Getters
	int getDegats() const;
	string getNom() const;

	//Setters
	void setDegats(int);
	void setNom(string);

	//Méthodes de classe
	void changer(string, int);
	void afficher() const;

	//Constructeurs
	cArme();
	cArme(string, int);

	~cArme();
};

