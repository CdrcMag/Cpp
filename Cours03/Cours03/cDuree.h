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
	void display(ostream &flux) const;

	//Setters
	void setHeures(int);
	void setMinutes(int);
	void setSecondes(int);

	//Getters
	int getHeures() const;
	int getMinutes() const;
	int getSecondes() const;

	//Surcharges d'opérateur dans la classe
	void operator+=(cDuree const& a);


	//Constructeur(s) et destructeur
	cDuree();
	cDuree(int heures = 0, int minutes = 0, int secondes = 0);
	~cDuree();
};



//Les surcharges d'opérateurs doivent être déclarer après la classe, dans le h les prototypes, et dans le .cpp l'implémentation de la métode

//Surcharges
bool operator==(cDuree const& a, cDuree const& b);
bool operator!=(cDuree const& a, cDuree const& b);
cDuree operator+(cDuree const& a, cDuree const& b);
cDuree operator-(cDuree const& a, cDuree const& b);
ostream& operator<<(ostream& flux, cDuree const& duree);