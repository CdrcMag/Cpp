#include "cFPS.h"


//Méthode présentant l'objet, avec son genre, et sa place sur le total des objets
void cFPS::sePresenter() const
{
	cout << "Je suis un FPS a la place " << m_place << " sur " << nbr_instance << endl;
}


cFPS::cFPS()
{
	//Ajoute 1 au total d'objets
	nbr_instance++;

	//Assigne ce nombre à la place de l'objet actuel
	m_place = nbr_instance;
}


cFPS::~cFPS()
{
	//Décrémente le total lors de la destruction
	nbr_instance--;
}
