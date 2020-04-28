#pragma once

#include "cJeu.h"

class cFPS : public cJeu
{

private:

	int m_place;

public:

	void sePresenter() const override;

	cFPS();
	~cFPS();
};

