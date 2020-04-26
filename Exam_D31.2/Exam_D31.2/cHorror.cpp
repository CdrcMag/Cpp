#include "cHorror.h"

//Méthode virtuelle héritée
void cHorror::sePresenter() const
{
	cJeu::sePresenter();
	cout << " et je suis a la place " << m_place << " sur " << nbr_Instance << endl;
}

//Constructeur
cHorror::cHorror() : cJeu("horreur"), m_place(nbr_Instance)
{
}

//Destructeur
cHorror::~cHorror()
{
}
