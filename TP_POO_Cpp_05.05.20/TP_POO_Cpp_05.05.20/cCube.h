#pragma once

#include "cCarre.h"

class cCube : public cCarre
{
public:

	//Constructeur
	cCube(double, double = 0, double = 0);

	//Destructeur
	~cCube();

	//Méthodes
	double perimetre() const;
	double aire() const;
	double volume() const;
	string description(t_desc type) const;
	string toString() const;


};

