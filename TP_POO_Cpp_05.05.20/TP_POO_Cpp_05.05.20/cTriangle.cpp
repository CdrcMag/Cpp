#include "cTriangle.h"



//Base, hauteur, posX, posY
cTriangle::cTriangle(double base, double hauteur, double x, double y) : cFigure(x, y, 0), m_dblbase(base), m_dblhauteur(hauteur)
{
	//Appel le constructeur de cFigure et lui donne la position de la figure, puis sa base et hauteur
}


cTriangle::~cTriangle()
{
}


double cTriangle::perimetre() const
{
	//Retourne RacineDe[(base*2 + hauteur *2) + (base + hauteur)]
	return sqrt(m_dblbase * m_dblbase + m_dblhauteur * m_dblhauteur) + m_dblbase + m_dblhauteur;
}

double cTriangle::aire() const
{
	//Retourne (base * hauteur) / 2
	return m_dblbase * m_dblhauteur / 2;
}


//Retourne une description du triangle
string cTriangle::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Triangle";
	}
	else if (type == longue)
	{
		strDesc = "# # # Triangle # # #\n#\n" +
		strDesc += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
		strDesc += "# Particularites : \n#\t Base : " + to_string(m_dblbase) + "\n#\t Hauteur : " + to_string(m_dblhauteur) + "\n#\n";
		strDesc += "# # # # # # # # # # #\n";
	}
	else
	{
		strDesc = "";
	}

	return strDesc;
}

//Retourne une chaine contenant une description du triangle
string cTriangle::toString() const
{
	ostringstream oss;
	oss << m_dblbase << " " << m_dblhauteur;
	return cFigure::toString() + " " + oss.str();
}