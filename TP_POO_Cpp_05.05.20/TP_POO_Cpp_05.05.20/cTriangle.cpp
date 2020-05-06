#include "cTriangle.h"



//-------------------------
//
//	Constructeur
//
//	Appel du constructeur de figure
//
//	Arguments :
//	base, hauteur
//	
//	Facultatif : posX, posY
//
//-------------------------
cTriangle::cTriangle(double base, double hauteur, double x, double y) : cFigure(x, y, 0), m_dblbase(base), m_dblhauteur(hauteur)
{
	
}

//Destructeur
cTriangle::~cTriangle()
{
}

//Retourne le périmètre du triangle
double cTriangle::perimetre() const
{
	//Retourne RacineDe[(base*2 + hauteur *2) + (base + hauteur)]
	return sqrt(m_dblbase * m_dblbase + m_dblhauteur * m_dblhauteur) + m_dblbase + m_dblhauteur;
}

//Retourne l'aire du triangle
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