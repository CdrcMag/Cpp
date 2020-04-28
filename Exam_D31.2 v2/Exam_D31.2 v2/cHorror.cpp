#include "cHorror.h"

//Méthode présentant l'objet, avec son genre, et sa place sur le total des objets
void cHorror::sePresenter() const
{
	cout << "Je suis un jeu d'horreur, et j'ai la place " << m_place << " sur un total de " << cJeu::nbr_instance << endl;
}


cHorror::cHorror()
{
	//Ajoute 1 au total d'objets
	nbr_instance++;

	//Assigne ce nombre à la place de l'objet actuel
	m_place = nbr_instance;
}


cHorror::~cHorror()
{
	//Décrémente le total lors de la destruction
	nbr_instance--;
}
