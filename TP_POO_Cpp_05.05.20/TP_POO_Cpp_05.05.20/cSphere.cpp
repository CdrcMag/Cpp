#include "cSphere.h"


//-------------------------
//
//	Constructeur
//
//	Appel du constructeur de cCercle
//
//	Arguments :
//	rayon
//	
//	Facultatif : posX, posY
//
//-------------------------
cSphere::cSphere(double rayon, double x, double y) : cCercle(rayon, x, y)
{

}

//
cSphere::~cSphere()
{
}


double cSphere::volume() const
{
	return ((4 * PI) * (pow(m_rayon, 3))) / 3;
}

double cSphere::aire() const
{
	return 4 * PI * (m_rayon * m_rayon);
}

string cSphere::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Sphere";
	}
	else if (type == longue)
	{
		strDesc = "\n# # # Sphere # # #\n#\n" +
		strDesc += "# Position : \n#\t x : " + to_string(m_x) + "\n#\t y : " + to_string(m_y) + "\n#\n";
		strDesc += "# Particularites : \n#\t Rayon : " + to_string(m_rayon) + "\n#\n";
		strDesc += "# # # # # # # # # # #\n";
	}
	else
	{
		strDesc = "";
	}

	return strDesc;
}

string cSphere::toString() const
{
	ostringstream oss;
	oss << m_rayon;
	return cFigure::toString() + " " + oss.str();
}