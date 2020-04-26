#pragma once

#include <iostream>
#include <string>

using namespace std;

class cJeu
{
protected:

	//Nombre statique repr�sentant le nombre d'objets cr�es
	static int nbr_Instance;

	//chaine de caract�re stockant le genre de jeu. Initialis� dans le constructeur de chaque enfants
	string m_genre;

public:

	//M�thode virtuelle pure, transforme la classe en classe abstraite.
	virtual void sePresenter() const = 0;

	//Accesseur
	inline string getGenre() const {return this->m_genre;}
	
	//Constructeur (prend par d�faut une chaine, afin d'initialiser le genre du jeu. 
	//La classe �tant abstraite, aucun risque de cr�er un objet avec un mauvais constructeur.
	cJeu(string);

	//Destructeur
	~cJeu();
};

