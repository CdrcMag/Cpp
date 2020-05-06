#include "cCube.h"


//-------------------------
//
//	Constructeur
//
//	Appel du constructeur de cCube
//
//	Arguments :
//	largeur
//	
//	Facultatif : posX, posY
//
//-------------------------
cCube::cCube(double largeur, double x, double y) : cCarre(largeur, x, y)
{

}

//Destructeur
cCube::~cCube()
{
}



//Retourne le volume du cube
double cCube::volume() const
{
	return m_dbllargeur * m_dbllargeur * m_dbllargeur;
}

//Retourne l'aire du cube
double cCube::aire() const
{
	return (m_dbllargeur * m_dbllargeur) * 6;
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

//Retourne une chaine avec une description du cube
string cCube::toString() const
{
	ostringstream oss;
	oss << m_dbllargeur;
	return cFigure::toString() + " " + oss.str();
}