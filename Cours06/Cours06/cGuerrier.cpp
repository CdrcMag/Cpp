#include "cGuerrier.h"





//Méthode(s)
void cGuerrier::activerRage() const
{

}

void cGuerrier::sePresenter() const
{
	//Utilisation de la fonction de la classe mère
	cPersonnage::sePresenter();//Utilisation d'un opérateur de résolution de portée
	cout << "Taille : " << m_taille << endl;
}


//Constructeurs
cGuerrier::cGuerrier() : cPersonnage(), m_taille(0)
{
	cout << "Appel du constructeur par defaut de cGuerrier." << endl;
}


cGuerrier::cGuerrier(int taille) : cPersonnage(), m_taille(taille)
{

}


//Destructeurs
cGuerrier::~cGuerrier()
{
}
