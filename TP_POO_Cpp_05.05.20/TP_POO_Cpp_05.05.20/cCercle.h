#pragma once

#include "cFigure.h"

const double PI = 3.141592653589793238462643383279502884;

class cCercle : public cFigure
{


protected:

	double m_rayon;

public:
	cCercle(double, double = 0, double = 0);
	~cCercle();

	//Méthodes
	double perimetre() const;
	double aire() const;
	double volume() const { return 0; }
	string description(t_desc type) const;
	string toString() const;
};

