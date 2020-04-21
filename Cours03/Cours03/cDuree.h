#pragma once

#include <iostream>

using namespace std;

class cDuree
{
private:
	int m_heures;
	int m_minutes;
	int m_secondes;


public:

	//Méthodes
	void afficher() const;

	//Setters
	void setHeures(int);
	void setMinutes(int);
	void setSecondes(int);

	//Getters
	int getHeures() const;
	int getMinutes() const;
	int getSecondes() const;


	//Constructeur(s) et destructeur
	cDuree();
	cDuree(int heures = 0, int minutes = 0, int secondes = 0);
	~cDuree();
};

