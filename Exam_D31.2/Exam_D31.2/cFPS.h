#pragma once

#include "cJeu.h"

class cFPS : public cJeu
{
private:

	//Entier repr�sentant la place de l'objet 
	int m_place;

public:
	
	//M�thode d'affichage (utilisant le masquage)
	void sePresenter() const;

	//Constructeur
	cFPS();

	//Destructeur
	~cFPS();
};

