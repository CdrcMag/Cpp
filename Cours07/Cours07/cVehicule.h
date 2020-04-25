#pragma once

#include <iostream>
#include <string>

using namespace std;


class cVehicule
{
protected:

	int m_prix;
	int m_annee;


public:

	//Virtual uniquement dans le .h
	virtual void afficher() const;
	virtual int nbrRoues() const = 0;
	//Le "= 0" signifie que c'est une m�thode virtuelle pure. 
	//Cela signifie qu'une m�thode du m�me nom est pr�sente dans toutes les classes enfants, mais la m�thode du parent est inutilisable. 
	//Doit absolument �tre pr�sent dans le .h, optionnel dans le .cpp

	//Getter
	int getPrix() const;
	int getAnnee() const;

	//Setter
	void setPrix(int);
	void setAnnee(int);

	cVehicule();
	cVehicule(int);

	virtual ~cVehicule();
};

