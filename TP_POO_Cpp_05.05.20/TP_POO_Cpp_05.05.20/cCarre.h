#pragma once

#include "cFigure.h"

class cCarre : public cFigure
{

protected:

	double m_dbllargeur;


public:
	
	//Constructeur
	//Largeur, posX, posY
	cCarre(double largeur, double = 0, double = 0);

	//Destructeur
	virtual ~cCarre();

	//M�thodes
	virtual double perimetre() const;//M�thode automatiquement virtuelle
	virtual double aire() const;//M�thode automatiquement virtuelle
	string description(t_desc type) const;
	string toString() const;
};

