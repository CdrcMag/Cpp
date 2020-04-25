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
	//Le "= 0" signifie que c'est une méthode virtuelle pure. 
	//Cela signifie qu'une méthode du même nom est présente dans toutes les classes enfants, mais la méthode du parent est inutilisable. 
	//Doit absolument être présent dans le .h, optionnel dans le .cpp

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

