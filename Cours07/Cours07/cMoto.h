#pragma once

#include "cVehicule.h"

class cMoto : public cVehicule
{
private :

	double m_vitesse;

public:

	//Virtual uniquement dans le .h
	virtual void afficher() const;

	//Getters
	double getVitesse() const;

	//Setters
	void setVitesse(double);

	cMoto();
	cMoto(int, double);


	virtual ~cMoto();
};

