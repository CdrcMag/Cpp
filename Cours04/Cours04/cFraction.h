#pragma once
#include <iostream>

using namespace std;


class cFraction
{
private:

	float m_nominateur;
	float m_denominateur;




public:

	//Méthodes
	void afficher() const;
	void display(ostream&) const;

	//Getters
	float getNominateur() const;
	float getDenominateur() const;

	//Setters
	void setNominateur(float);
	void setDenominateur(float);

	//Constructeur et destructeur
	cFraction();
	cFraction(float, float = 1);
	~cFraction();
};

//Surcharges
ostream& operator<<(ostream&, cFraction const&);
cFraction& operator+(cFraction const&, cFraction const&);
cFraction& operator*(cFraction const&, cFraction const&);
bool operator>(cFraction const&, cFraction const&);
bool operator<(cFraction const&, cFraction const&);
bool operator==(cFraction const&, cFraction const&);