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

	void display(ostream& out) const;  //Permet d'�crire la dur�e dans un flux 

	int m_heures;
	int m_minutes;
	int m_secondes;

	//D�claration de la fonctione amie, afin qu'elle ait acc�s � la m�thode display(ostream&).
	friend ostream &operator<<(ostream &out, cDuree const& duree);
	//L'op�rateur << a donc acc�s � la classe cDuree. Il peut donc utiliser display(ostream&)
};