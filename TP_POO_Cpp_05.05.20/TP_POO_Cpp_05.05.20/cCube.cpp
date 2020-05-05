#include "cCube.h"



cCube::cCube(double largeur, double x, double y) : cCarre(largeur, x, y)
{

}


cCube::~cCube()
{
}



//Retourne le volume du cube
double cCube::volume() const
{
	return m_dbllargeur * m_dbllargeur * m_dbllargeur;
}

double cCube::aire() const
{
	return m_dbllargeur * m_dbllargeur * m_dbllargeur;
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

//Retourne une chaine avec une description en détail
string cCube::toString() const
{
	string strDesc = to_string(m_x) + " " + to_string(m_y) + " " + to_string(m_z) + " " + to_string(m_dbllargeur);

	return strDesc;
}