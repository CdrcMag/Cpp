#include "cRPG.h"

//Méthode présentant l'objet, avec son genre, et sa place sur le total des objets
void cRPG::sePresenter() const
{
	cout << "Je suis un RPG, et j'ai la place " << m_place << " sur un total de " << cJeu::nbr_instance << endl;
}





cRPG::cRPG()
{
	//Ajoute 1 au total d'objets
	nbr_instance++;

	//Assigne ce nombre à la place de l'objet actuel
	m_place = nbr_instance;
}


cRPG::~cRPG()
{
	//Décrémente le total lors de la destruction
	nbr_instance--;
}
