#pragma once

#include "cJeu.h"

class cHorror : public cJeu
{
private:

	//Place de l'objet sur un total
	int m_place;


public:

	//M�thode surcharg�e
	void sePresenter() const override;

	//Constructeur
	cHorror();

	//Destructeur
	~cHorror();
};

