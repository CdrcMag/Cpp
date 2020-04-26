#pragma once

#include <iostream>
#include <string>

using namespace std;

class cJeu
{
protected:

	//Nombre statique représentant le nombre d'objets crées
	static int nbr_Instance;

	//chaine de caractère stockant le genre de jeu. Initialisé dans le constructeur de chaque enfants
	string m_genre;

public:

	//Méthode virtuelle pure, transforme la classe en classe abstraite.
	virtual void sePresenter() const = 0;

	//Accesseur
	inline string getGenre() const {return this->m_genre;}
	
	//Constructeur (prend par défaut une chaine, afin d'initialiser le genre du jeu. 
	//La classe étant abstraite, aucun risque de créer un objet avec un mauvais constructeur.
	cJeu(string);

	//Destructeur
	~cJeu();
};

