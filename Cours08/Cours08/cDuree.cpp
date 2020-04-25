#include "cDuree.h"



cDuree::cDuree(int a, int b, int c) : m_heures(a), m_minutes(b), m_secondes(c)
{

}


cDuree::~cDuree()
{
}

void cDuree::display(ostream &flux) const
{
	//flux est un surnom de cout, pour éviter les conflits
	flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}

ostream &operator<<(ostream &out, cDuree const& duree)
{
	duree.display(out);//N'a plus accès à display(ostream&) quand elle est placée en privé. Besoin de fonction amie.
	return out;
}