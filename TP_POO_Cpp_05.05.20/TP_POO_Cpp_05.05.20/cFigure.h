#pragma once

#include <iostream>
#include <string>

using namespace std;

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

	//M�thodes (�tant toutes virtuelles, aucune d'elles ne seront vraiment appel�e
	inline virtual double perimetre() const = 0 { cout << "Erreur, aucun perimetre" << endl; return 0; } //Retourne le p�rim�tre -> M�thode virtuelle pure
	inline virtual double aire() const { cout << "Erreur, aucune aire" << endl;  return 0; } //Retourne l'aire
	inline virtual double volume() const { cout << "Erreur, aucun volume" << endl; return 0; }//Retourne le volume
	inline virtual string description(t_desc type) const { return "Figure"; }
	virtual string toString() const;
};