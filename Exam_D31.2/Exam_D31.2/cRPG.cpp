#include "cRPG.h"

//M�thode virtuelle h�rit�e
void cRPG::sePresenter() const
{
	cJeu::sePresenter();
	cout << " et je suis a la place " << m_place << " sur " << nbr_Instance << endl;
}

//Constructeur
cRPG::cRPG() : cJeu("RPG"), m_place(nbr_Instance)
{
}

//Destructeur
cRPG::~cRPG()
{
}
