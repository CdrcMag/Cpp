#pragma once

#include "cJeu.h"

class cRPG : public cJeu
{
private:

	//Représente la place
	int m_place;

public:

	//Méthode d'affichage (utilisant le masquage)
	void sePresenter() const;

	cRPG();
	~cRPG();
};

