#pragma once

#include <iostream>
#include <string>

#include "cPersonnage.h"

//Guerrier h�rite de personnage
class cGuerrier : public cPersonnage
{
private:

	int m_taille;

public:

	void activerRage() const;

	void sePresenter() const;


	cGuerrier();
	cGuerrier(int);
	~cGuerrier();
};

