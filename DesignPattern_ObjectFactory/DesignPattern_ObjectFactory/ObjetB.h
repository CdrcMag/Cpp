#pragma once
#include "Objet.h"

class ObjetB : public Objet
{
public:

	string Operation() const override
	{
		return "Ceci est un objet b";
	}

	ObjetB();
	~ObjetB();
};

