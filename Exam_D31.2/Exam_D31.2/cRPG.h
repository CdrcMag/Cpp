#pragma once

#include "cJeu.h"

class cRPG : public cJeu
{
private:

	//Repr�sente la place
	int m_place;

public:

	//M�thode d'affichage (utilisant le masquage)
	void sePresenter() const;

	cRPG();
	~cRPG();
};

