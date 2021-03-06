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

	//M�thodes
	void afficher() const;//permet l'affichage depuis cDuree.afficher()
	void display(ostream &flux) const;//m�thode utilis� par la surcharge d'op�rateur <<

	//Setters
	void setHeures(int);
	void setMinutes(int);
	void setSecondes(int);

	//Getters
	int getHeures() const;
	int getMinutes() const;
	int getSecondes() const;

	//Surcharge d'op�rateur dans la classe car besoin de modifier les attributs
	void operator+=(cDuree const& a);


	//Constructeur(s) et destructeur
	cDuree();
	cDuree(int heures = 0, int minutes = 0, int secondes = 0);
	~cDuree();
};



//Les surcharges d'op�rateurs doivent �tre d�clarer apr�s la classe, dans le h les prototypes, et dans le .cpp l'impl�mentation de la m�tode

//Surcharges
bool operator==(cDuree const& a, cDuree const& b);
bool operator!=(cDuree const& a, cDuree const& b);
cDuree operator+(cDuree const& a, cDuree const& b);
cDuree operator-(cDuree const& a, cDuree const& b);
ostream& operator<<(ostream& flux, cDuree const& duree);