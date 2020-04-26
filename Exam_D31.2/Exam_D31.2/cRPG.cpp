#include "cRPG.h"

void cRPG::sePresenter() const
{
	cJeu::sePresenter();
	cout << " et je suis a la place " << m_place << " sur " << nbr_Instance << endl;
}

cRPG::cRPG() : cJeu("RPG"), m_place(nbr_Instance)
{
}


cRPG::~cRPG()
{
}
