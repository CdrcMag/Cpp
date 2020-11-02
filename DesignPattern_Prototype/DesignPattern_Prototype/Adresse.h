#pragma once

#include <string>
using namespace std;

class Adresse
{
private:
	


public:
	Adresse(string, string, int);
	~Adresse();

	string m_adresse;
	string m_ville;
	int m_numero;
};

