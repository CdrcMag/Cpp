#pragma once

#include <iostream>
#include <string>

using namespace std;

class cMaClasse
{
private:

	
	static int compteur;

	//Membre priv�, plus rare mais possible. Utilisable dans le .cpp de la classe, et dans le main
	static int m_valeur;



public:

	//M�thode statique 
	static void maMethode();
	static int nbr_instance();


	cMaClasse();
	~cMaClasse();
};

