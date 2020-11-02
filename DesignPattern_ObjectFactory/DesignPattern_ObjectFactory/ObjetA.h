#pragma once
#include "Objet.h"

class ObjetA : public Objet
{
public:

	string Operation() const override
	{
		return "Ceci est un objet a";
	}

	ObjetA();
	~ObjetA();
};

