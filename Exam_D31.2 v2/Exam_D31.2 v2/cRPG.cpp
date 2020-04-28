#include "cRPG.h"

//M�thode pr�sentant l'objet, avec son genre, et sa place sur le total des objets
void cRPG::sePresenter() const
{
	cout << "Je suis un RPG, et j'ai la place " << m_place << " sur un total de " << cJeu::nbr_instance << endl;
}





cRPG::cRPG()
{
	//Ajoute 1 au total d'objets
	nbr_instance++;

	//Assigne ce nombre � la place de l'objet actuel
	m_place = nbr_instance;
}


cRPG::~cRPG()
{
	//D�cr�mente le total lors de la destruction
	nbr_instance--;
}
