#include "cParallelepipede.h"



cParallelepipede::cParallelepipede(double longueur, double largeur, double hauteur, double x, double y) : cRectangle(longueur, largeur, x, y), m_hauteur(hauteur), m_dx(x), m_dy(y)
{

}


cParallelepipede::~cParallelepipede()
{
}


double cParallelepipede::volume() const
{
	return m_longueur * m_largeur * m_hauteur;
}

double cParallelepipede::aire() const
{
	return (m_longueur * m_largeur) * 2 + (m_largeur * m_hauteur) * 2 + (m_longueur * m_hauteur) * 2;
}

string cParallelepipede::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Parallelepipede";
	}
	else if (type == longue)
	{
		strDesc = "\n# # # Parallelepipede # # #\n#\n" +
			strDesc += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
		strDesc += "# Particularites : \n#\t Longueur : " + to_string(m_longueur)+ "\n#\t Largeur : " + to_string(m_largeur) + "\n#\t Hauteur : " + to_string(m_hauteur) + "\n#\n";
		strDesc += "# # # # # # # # # # #\n";
	}
	else
	{
		strDesc = "";
	}

	return strDesc;
}

string cParallelepipede::toString() const
{
	ostringstream oss;
	oss << m_largeur << " " << m_longueur << " " << m_hauteur << " " << m_dx << " " << m_dy;
	return cFigure::toString() + " " + oss.str();
}