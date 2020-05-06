#include "cCercle.h"




cCercle::cCercle(double rayon, double x, double y) : cFigure(x, y), m_rayon(rayon)
{

}


cCercle::~cCercle()
{
}



double cCercle::aire() const
{
	return PI * (m_rayon * m_rayon);
}

double cCercle::perimetre() const
{
	return 2 * PI * m_rayon;
}

string cCercle::description(t_desc type) const
{
	string strDesc = "";

	if (type == courte)
	{
		strDesc = "Cercle";
	}
	else if (type == longue)
	{
		strDesc = "\n# # # Cercle # # #\n#\n" +
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


string cCercle::toString() const
{
	ostringstream oss;
	oss << m_rayon;
	return cFigure::toString() + " " + oss.str();
}
