#pragma once

#include <string>
#include <iostream>

using namespace std;

class CArme
{

private:

	string m_nom;
	int m_degats;


public:

	int getDegats() const;
	string getNom() const;

	void setDegats(int);
	void setNom(string);


	CArme();
	CArme(string, int);
	void changer(string, int);
	void afficher() const;
	~CArme();
};

