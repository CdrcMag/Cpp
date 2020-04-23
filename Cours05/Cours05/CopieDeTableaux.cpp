#include "CopieDeTableaux.h"

//Fonction d'initialisation de tableau d'entiers à 0
void InitTab(int a[])
{
	for (int i = 0; i < TAILLE; i++)
	{
		a[i] = 0;
	}
}

//Fonction qui copie les valeurs positives d'un tableau à dans un tableau b
void CopierValeurPositives(const int a[], int b[])
{
	for (int i = 0; i < TAILLE; i++)
	{
		if (a[i] >= 0)
		{
			b[i] = a[i];
		}
	}
}


//Fonction qui génère des chiffres aléatoires dans un tableau d'entiers (entre -50 et 100)
void GenererRandom(int tab[])
{
	for (int i = 0; i < TAILLE; i++)
	{
		tab[i] = rand() % 150 + (-50);
	}

}

//Fonction qui affiche un tableau
void AfficherTableau(const int tab[])
{
	cout << "----------------------" << endl;
	for (int i = 0; i < TAILLE; i++)
	{
		cout << i << " : " << tab[i] << endl;
	}
}