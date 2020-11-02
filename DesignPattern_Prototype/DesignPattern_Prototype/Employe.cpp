#include "Employe.h"



Employe::Employe(string nom, Adresse* adresse) : m_nom(nom), m_adresse(adresse)
{
}


Employe::~Employe()
{
}

void Employe::Afficher(ostream &flux) const
{
	flux << "Mon nom est " << m_nom << " et je reside ici : " << m_adresse->m_adresse << " a " << m_adresse->m_ville << endl;
}

ostream& operator<<(ostream &flux, Employe const& duree)
{
	duree.Afficher(flux);
	return flux;
}



