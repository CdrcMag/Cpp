#pragma once

#include "cJeu.h"

class cRPG : public cJeu
{
private:

	int m_place;

public:

	void sePresenter() const override;

	cRPG();
	~cRPG();
};

