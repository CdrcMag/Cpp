#include "cCarre.h"


//-------------------------
//
//	Constructeur
//
//	Appel du constructeur de figure
//
//	Arguments :
//	largeur
//	
//	Facultatif : posX, posY
//
//-------------------------
cCarre::cCarre(double largeur, double x, double y) : cFigure(x, y, 0), m_dbllargeur(largeur)
{

}

//Destructeur
cCarre::~cCarre()
{
}


//Retourne le p�rim�tre du carr�
double cCarre::perimetre() const
{
	return m_dbllargeur * 4;
}

//Retourne l'aire du carr�
double cCarre::aire() const
{
	return m_dbllargeur * m_dbllargeur;
}

//Retourne une description du carr�
string cCarre::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Carre";
	}
	else if (type == longue)
	{
		strDesc = "\n# # # Carre # # #\n#\n" +
		strDesc += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
		strDesc += "# Particularites : \n#\t Largeur : " + to_string(m_dbllargeur) + "\n#\n";
		strDesc += "# # # # # # # # # # #\n";
	}
	else
	{
		strDesc = "";
	}

	return strDesc;
}

//Retourne une chaine contenant une description du triangle
string cCarre::toString() const
{
	ostringstream oss;
	oss << m_dbllargeur;
	return cFigure::toString() + " " + oss.str();
}
