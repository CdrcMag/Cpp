#include "cPersonnage.h"




//---------------------------------------------------------------------------------------//
//
//		Le(s) méthode(s)
//
//---------------------------------------------------------------------------------------//
void cPersonnage::recevoirDegats(int degats)
{
	m_vie -= degats;
}

void cPersonnage::coupDePoing(cPersonnage& autre) const //const car elle ne change aucune donnée membre
{
	autre.recevoirDegats(10);
}

void cPersonnage::sePresenter() const
{
	cout << "Nom : " << m_nom << endl;
	cout << "Vie : " << m_vie << endl;
}














//---------------------------------------------------------------------------------------//
//
//		Le(s) constructeur(s)
//
//---------------------------------------------------------------------------------------//
cPersonnage::cPersonnage() : m_nom("Jack"), m_vie(100)
{
	cout << "Appel du constructeur par defaut de cPersonnage." << endl;
}

//---------------------------------------------------------------------------------------//
//
//		Le(s) destructeur(s)
//
//---------------------------------------------------------------------------------------//
cPersonnage::~cPersonnage()
{
}
