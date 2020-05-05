#pragma once

#include "cCercle.h"

class cSphere : public cCercle
{
public:
	cSphere(double, double = 0, double = 0);
	~cSphere();

	double volume() const;
	double aire() const;
	double perimetre() const { return 0; }
	string description(t_desc type) const;
	string toString() const;
};

