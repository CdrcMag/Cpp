#include "cHorror.h"

//M�thode pr�sentant l'objet, avec son genre, et sa place sur le total des objets
void cHorror::sePresenter() const
{
	cout << "Je suis un jeu d'horreur, et j'ai la place " << m_place << " sur un total de " << cJeu::nbr_instance << endl;
}


cHorror::cHorror()
{
	//Ajoute 1 au total d'objets
	nbr_instance++;

	//Assigne ce nombre � la place de l'objet actuel
	m_place = nbr_instance;
}


cHorror::~cHorror()
{
	//D�cr�mente le total lors de la destruction
	nbr_instance--;
}
