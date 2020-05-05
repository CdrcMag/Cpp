#pragma once

#include "cFigure.h"

class cTriangle : public cFigure
{
private:

	double m_dblbase;
	double m_dblhauteur;

public:
	
	//Constructeur
	//Appel le constructeur de cFigure et lui donne la position de la figure, puis sa base et hauteur
	cTriangle(double base, double hauteur, double x = 0, double y = 0);

	//Destructeurs
	~cTriangle();

	//Méthodes
	double perimetre() const;
	double aire() const;
	double volume() const { return 0; }
	string description(t_desc type) const;
	string toString() const;
};

