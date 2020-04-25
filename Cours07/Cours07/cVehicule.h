#pragma once

#include <iostream>
#include <string>

using namespace std;

class cVehicule
{
protected:

	int m_prix;


public:

	//Virtual uniquement dans le .h
	virtual void afficher() const;

	//Getter
	int getPrix() const;

	//Setter
	void setPrix(int);

	cVehicule();
	cVehicule(int);

	virtual ~cVehicule();
};

