#pragma once

#include "cJeu.h"

class cFPS : public cJeu
{
private:

	//Entier représentant la place de l'objet 
	int m_place;

public:
	
	//Méthode d'affichage (utilisant le masquage)
	void sePresenter() const;

	//Constructeur
	cFPS();

	//Destructeur
	~cFPS();
};

