#include "cMaClasse.h"

//Initialisation de la valeur du membre statique privé. Attention, variable globale.
int cMaClasse::m_valeur = 12;

int cMaClasse::compteur = 0;

void cMaClasse::maMethode()
{
	int x = 12;

	cout << "x = " << x << endl;
}

int cMaClasse::nbr_instance()
{
	return compteur;
}

cMaClasse::cMaClasse()
{
	compteur++;
}


cMaClasse::~cMaClasse()
{
	compteur--;
}
