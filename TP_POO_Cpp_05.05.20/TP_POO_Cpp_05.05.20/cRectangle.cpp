#include "cRectangle.h"


//-------------------------
//
//	Constructeur
//
//	Appel du constructeur de cFigure
//
//	Arguments :
//	longueur, largeur
//	
//	Facultatif : posX, posY
//
//-------------------------
cRectangle::cRectangle(double longueur, double largeur, double x, double y) : cFigure(x, y, 0), m_longueur(longueur), m_largeur(largeur)
{
}


cRectangle::~cRectangle()
{
}



double cRectangle::perimetre() const
{
	return (m_longueur * 2) + (m_largeur * 2);
}

double cRectangle::aire() const
{
	return (m_longueur * m_largeur);
}

string cRectangle::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Rectangle";
	}
	else if (type == longue)
	{
		strDesc = "\n# # # Rectangle # # #\n#\n" +
		strDesc += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
		strDesc += "# Particularites : \n#\t Longueur : " + to_string(m_longueur) + "\n#\t Largeur : " + to_string(m_largeur) + "\n#\n";
		strDesc += "# # # # # # # # # # #\n";
	}
	else
	{
		strDesc = "";
	}

	return strDesc;
}

string cRectangle::toString() const
{
	ostringstream oss;
	oss << m_longueur << " " << m_largeur;
	return cFigure::toString() + " " + oss.str();
}