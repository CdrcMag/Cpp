#include "cJeu.h"

//Initialise le nombre d'instances d'objets à 0
int cJeu::nbr_Instance = 0;

//******************************
//	But : Afficher le genre de jeu
//	Entrée : --
//	Sortie : Affiche dans la console le type de jeu
//
//******************************
void cJeu::sePresenter() const
{
	cout << "Je suis un jeu de type " << m_genre;
}


//Constructeur
cJeu::cJeu(string genre) : m_genre(genre)
{
	nbr_Instance++;
}

//Destructeur
cJeu::~cJeu()
{
	nbr_Instance--;
}
