#pragma once

#include <iostream>
#include <string>

#include "cPersonnage.h"

//Guerrier h�rite de personnage
class cGuerrier : public cPersonnage
{
private:



public:

	void activerRage() const;



	cGuerrier();
	~cGuerrier();
};

