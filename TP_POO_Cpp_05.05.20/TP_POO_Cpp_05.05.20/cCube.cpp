#include "cCube.h"



cCube::cCube(double largeur, double x, double y) : cCarre(largeur, x, y)
{

}


cCube::~cCube()
{
}


//Retourne l'aire d'une face
double cCube::aire() const 
{
	return m_dbllargeur * m_dbllargeur;
}

//Retourne le volume du cube
double cCube::volume() const
{
	return m_dbllargeur * m_dbllargeur * m_dbllargeur;
}

//Retourne le périmètre (valeur de totale des bords)
double cCube::perimetre() const
{
	return m_dbllargeur * 12;
}

//Retourne une chaine avec une description en détail
string cCube::toString() const
{
	string strDescr = "\n# # # Cube # # #\n#\n" +
		strDescr += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
	strDescr += "# Particularites : \n#\t Largeur : " + to_string(m_dbllargeur) + "\n#\n";

	strDescr += "# # # # # # # # # # #\n";

	return strDescr;
}


string cCube::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Cube";
	}
	else if (type == longue)
	{
		strDesc = "\n# # # Cube # # #\n#\n" +
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

