#pragma once

#include <iostream>

using namespace std;

class cJeu
{

protected:

	//Nombre d'instances totale
	static int nbr_instance;

public:

	//Méthode virtuelle pure
	virtual void sePresenter() const = 0;

	//Assesseurs
	static inline int getTotalInstance() { return nbr_instance; }

};

