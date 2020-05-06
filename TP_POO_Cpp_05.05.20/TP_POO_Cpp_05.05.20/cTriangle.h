#pragma once

#include "cFigure.h"

class cTriangle : public cFigure
{
private:

	double m_dblbase;
	double m_dblhauteur;

public:
	
	//Constructeur
	cTriangle(double base, double hauteur, double x = 0, double y = 0);

	//Destructeurs
	~cTriangle();

	//M�thodes
	double perimetre() const;
	double aire() const;
	double volume() const { return 0; }//M�thode non-utilis�e dans cette figure
	string description(t_desc type) const;
	string toString() const;
};

