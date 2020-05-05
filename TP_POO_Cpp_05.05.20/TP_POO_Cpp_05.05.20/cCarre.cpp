#include "cCarre.h"


//Constructeur
cCarre::cCarre(double largeur, double x, double y) : cFigure(x, y, 0), m_dbllargeur(largeur)
{

}

//Destructeur
cCarre::~cCarre()
{
}


//Méthodes 
double cCarre::perimetre() const
{
	return m_dbllargeur * 4;
}

double cCarre::aire() const
{
	return m_dbllargeur * m_dbllargeur;
}

//Retourne une description du carré
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


string cCarre::toString() const
{
	string strDesc = "\n# # # Carre # # #\n#\n" +
		strDesc += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
	strDesc += "# Particularites : \n#\t Largeur : " + to_string(m_dbllargeur) + "\n#\n";

	strDesc += "# # # # # # # # # # #\n";

	return strDesc;
}
