#pragma once

#include "cFigure.h"

class cRectangle : public cFigure
{

protected:

	double m_longueur;
	double m_largeur;


public:

	//Constructeur
	cRectangle(double, double, double = 0, double = 0);

	//Destructeur
	virtual ~cRectangle();

	//M�thodes
	double perimetre() const;
	double aire() const;
	double volume() const { return 0; }//M�thode non-utilis�e dans rectangle
	string description(t_desc type) const;
	string toString() const;
};

