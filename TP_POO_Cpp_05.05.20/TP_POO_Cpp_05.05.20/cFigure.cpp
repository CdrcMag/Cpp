#include "cFigure.h"



cFigure::cFigure(double x, double y, double z) : m_x(x), m_y(y), m_z(z)
{

}


cFigure::~cFigure()
{
}


string cFigure::toString() const
{
	ostringstream oss;
	oss << m_x << " " << m_y << " " << m_z;
	return oss.str();

}