#pragma once

#include "cFigure.h"

class cCarre : public cFigure
{

protected:

	double m_dbllargeur;


public:
	
	//Constructeur
	cCarre(double largeur, double = 0, double = 0);

	//Destructeur
	virtual ~cCarre();

	//Méthodes
	double perimetre() const;
	double aire() const;
	double volume() const { return 0; }
	string description(t_desc type) const;
	string toString() const;
};

