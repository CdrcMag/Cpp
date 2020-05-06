#include "cFigure.h"


//-------------------------
//
//	Constructeur
//
//	Arguments :
//	posX, posY, posZ
//
//-------------------------
cFigure::cFigure(double x, double y, double z) : m_x(x), m_y(y), m_z(z)
{

}

//Destructeur
cFigure::~cFigure()
{
}

//Retourne une chaine contenant les positions x, y et z
string cFigure::toString() const
{
	ostringstream oss;
	oss << m_x << " " << m_y << " " << m_z;
	return oss.str();

}