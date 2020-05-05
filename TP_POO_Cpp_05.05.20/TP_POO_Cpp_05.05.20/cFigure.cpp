#include "cFigure.h"



cFigure::cFigure(double x, double y, double z) : m_x(x), m_y(y), m_z(z)
{

}


cFigure::~cFigure()
{
}


string cFigure::toString() const
{
	string chaine = "";

	chaine += "X : " + to_string(m_x);
	chaine += " / Y : " + to_string(m_y);
	chaine += " / Z : " + to_string(m_z);

	return chaine;
}