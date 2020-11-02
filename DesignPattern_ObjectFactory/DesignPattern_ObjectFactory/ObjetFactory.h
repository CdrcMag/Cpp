#pragma once

#include "Objet.h"
#include "ObjetA.h"
#include "ObjetB.h"

class ObjetFactory
{
public:
	ObjetFactory();
	~ObjetFactory();

	Objet* Create(int) const;
};

