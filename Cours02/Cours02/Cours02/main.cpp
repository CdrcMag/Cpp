#include <iostream>
#include "CPersonnage.h"

using namespace std;


//Prototype(s)
void sautDeLigne();

int main(void)
{
	//Déclaration des personnages
	CPersonnage Perso1("Olaf", 100, 50, "Hache", 20);
	CPersonnage Perso2("Luigi", 80, 100, "Sceptre", 10);

	//Affichage des caractéristiques des personnages
	Perso1.toString();
	Perso2.toString();

	sautDeLigne();
	
	cout << "Debut du combat" << endl;
	sautDeLigne();

	//Le perso 1 attaque le perso 2
	cout << Perso1.getNom() << " attaque " << Perso2.getNom() << " !" << endl;
	Perso1.attaquer(Perso2);
	sautDeLigne();

	//Le perso 2 boit une potion de vie
	cout << Perso2.getNom() << " boit une potion de vie ! " << endl;
	Perso2.boirePotionDeVie(5);
	sautDeLigne();

	//Le perso 2 change d'arme
	cout << Perso2.getNom() << " change d'arme et a maintenant ";
	Perso2.changerArme("Bazooka", 300);
	cout << "un " << Perso2.getNomArme() << endl;
	sautDeLigne();

	//Perso2 attaque Perso1
	cout << Perso2.getNom() << " attaque " << Perso1.getNom() << endl;
	Perso2.attaquer(Perso1);
	sautDeLigne();

	//Est ce que le perso 1 est toujours vivant ?
	if (Perso1.estVivant())
	{
		cout << Perso1.getNom() << " est vivant !" << endl;
	}
	else
	{
		cout << Perso1.getNom() << " est mort !" << endl;
	}
	sautDeLigne();

	system("pause");
	return 0;
}

void sautDeLigne()
{
	cout << endl;
}