#pragma once

#include <iostream>
#include <string>

using namespace std;

class cPersonnage
{

protected:

	string m_nom;
	int m_vie;

public:

	//M�thode(s)
	void recevoirDegats(int);
	void coupDePoing(cPersonnage&) const;

	void sePresenter() const;


	//Constructeur(s)
	cPersonnage();
	~cPersonnage();
};

