#pragma once
#include "cJeu.h"


class cHorror : public cJeu
{
private:

	int m_place;

public:

	//M�thode d'affichage (utilisant le masquage)
	void sePresenter() const;

	cHorror();
	~cHorror();
};

