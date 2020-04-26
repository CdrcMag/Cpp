#include "cHorror.h"

void cHorror::sePresenter() const
{
	cJeu::sePresenter();
	cout << " et je suis a la place " << m_place << " sur " << nbr_Instance << endl;
}

cHorror::cHorror() : cJeu("horreur"), m_place(nbr_Instance)
{
}


cHorror::~cHorror()
{
}
