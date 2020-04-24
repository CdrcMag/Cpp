#pragma once

#include "cPersonnage.h"


class cMagicien : public cPersonnage
{
private:

	int m_mana;



public:

	void bouleDeFeu() const;
	void bouleDeGlace() const;

	
	cMagicien();
	~cMagicien();
};

