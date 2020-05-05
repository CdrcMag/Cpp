#pragma once

#include "cRectangle.h"


class cParallelepipede : public cRectangle
{

private:

	double m_hauteur;
	double m_dx;
	double m_dy;

public:
	cParallelepipede(double, double, double, double = 0, double = 0);

	~cParallelepipede();

	double volume() const;
	double aire() const;
	double perimetre() const { return 0; }
	string description(t_desc type) const;
	string toString() const;
};

