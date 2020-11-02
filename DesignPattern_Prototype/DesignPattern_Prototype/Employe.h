#pragma once

#include <iostream>
#include <string>
#include "Adresse.h"

using namespace std;

class Employe
{
private:
	string m_nom;
	const Adresse* m_adresse;


public:
	void Afficher(ostream &flux) const;
	Employe(string, Adresse*);
	~Employe();
};

ostream& operator<<(ostream&, Employe const&);