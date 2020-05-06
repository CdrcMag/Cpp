#pragma once

#include <iostream>
#include <string>
#include <math.h>
#include <sstream>

using namespace std;


//Enum contenant 'courte' et 'longue', servant de param�tre pour les descriptions demand�es
typedef enum { courte, longue } t_desc;


class cFigure
{
protected:

	//Coordon�es du centre de la figure
	double m_x;
	double m_y;
	double m_z;

	//Constructeur
	cFigure(double = 0, double = 0, double = 0);

public:


	//Destructeur
	virtual ~cFigure();

	//M�thodes
	inline virtual double perimetre() const = 0 { return 0; } //Retourne le p�rim�tre
	inline virtual double aire() const = 0 { return 0; } //Retourne l'aire
	inline virtual double volume() const = 0{ return 0; }//Retourne le volume
	inline virtual string description(t_desc type) const { return "Figure"; }
	virtual string toString() const;
};