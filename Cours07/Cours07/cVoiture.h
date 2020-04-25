#pragma once

#include "cVehicule.h"

class cVoiture : public cVehicule
{
private:

	int m_portes;


public:

	//Virtual uniquement dans le .h
	virtual void afficher() const;
	virtual int nbrRoues() const;

	//Getters
	int getPortes() const;

	//Setters
	void setPortes(int);

	cVoiture();
	cVoiture(int, int);

	//Le destructeur doit toujours être virtuel si l'on utilise le polymorphisme
	virtual ~cVoiture();
};

