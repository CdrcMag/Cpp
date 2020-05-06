#include "cParallelepipede.h"


//-------------------------
//
//	Constructeur
//
//	Appel du constructeur de cRectangle
//
//	Arguments :
//	longueur, largeur, hauteur
//	
//	Facultatif : posX, posY
//
//	Notes : dx et dy prennen les valeurs de x et y, soit la position de la figure, représente son centre
//-------------------------
cParallelepipede::cParallelepipede(double longueur, double largeur, double hauteur, double x, double y) : cRectangle(longueur, largeur, x, y), m_hauteur(hauteur), m_dx(x), m_dy(y)
{

}


//Destructeur
cParallelepipede::~cParallelepipede()
{
}

//Retourne le volume du parallelepipede
double cParallelepipede::volume() const
{
	return m_longueur * m_largeur * m_hauteur;
}

//Retourne l'aire du parallelepipede
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

//Retourne une chaine contenant la description de la figure
string cParallelepipede::toString() const
{
	ostringstream oss;
	oss << m_largeur << " " << m_longueur << " " << m_hauteur << " " << m_dx << " " << m_dy;
	return cFigure::toString() + " " + oss.str();
}