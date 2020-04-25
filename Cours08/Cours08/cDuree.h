#pragma once

#include <iostream>
#include <string>

using namespace std;

class cDuree
{
public:

	

	cDuree(int heures = 0, int minutes = 0, int secondes = 0);
	cDuree();
	~cDuree();

private:

	void display(ostream& out) const;  //Permet d'écrire la durée dans un flux 

	int m_heures;
	int m_minutes;
	int m_secondes;

	//Déclaration de la fonctione amie, afin qu'elle ait accès à la méthode display(ostream&).
	friend ostream &operator<<(ostream &out, cDuree const& duree);
	//L'opérateur << a donc accès à la classe cDuree. Il peut donc utiliser display(ostream&)
};