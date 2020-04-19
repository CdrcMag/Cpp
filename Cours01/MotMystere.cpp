#include "MotMystere.h"

using namespace std;


//Fonction qui prend en argument un mot passé par adresse constante, et retourne ce mot avec les lettres mélangées
string melangerMot(string const& mot)
{
	srand(time(NULL));
	
	string motTempo = mot;
	string motArendre = "";

	int random = rand() % mot.size();

	for (int i = 0; i < mot.size(); i++)
	{
		random = rand() % motTempo.size();
		motArendre += motTempo.substr(random, 1);
		motTempo = motTempo.erase(random, 1);
	}

	return motArendre;
}