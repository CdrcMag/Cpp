#pragma once

#include "cVehicule.h"


class cCamion : public cVehicule
{
private:

	int m_poids;


public:

	int getPoids() const;
	void setPoids(int);
	virtual int nbrRoues() const;
	cCamion();
	cCamion(int, int);
	~cCamion();
};

