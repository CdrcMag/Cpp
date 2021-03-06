#include <iostream>
#include <iomanip>
#include <list>
#include <fstream>

//Forward d�claration de cFigure
class cFigure;

#include "cTriangle.h"
#include "cCarre.h"
#include "cCube.h"
#include "cRectangle.h"
#include "cCercle.h"
#include "cSphere.h"
#include "cParallelepipede.h"

using namespace std;

/*
	Notes : 

	- Triangle : cTriangle(base, hauteur, posX, posY)
	- Carre : cCarre(largeur, posX, posY)
	- Cube : cCube(largeur, posX, posY)
	- Rectangle : cRectangle(longueur, largeur, posX, posY)
	- Cercle : cCercle(rayon, posX, posY)
	- Sphere : cSphere(rayon, posX, posY)
	- Parallelepipede : cParallelepipede(longueur, largeur, hauteur, posX, posY)


*/
int main(void)
{

	cTriangle triangle(5, 8);
	//cout << "Triangle :" << endl;
	cout << "Je suis un : " << triangle.description(courte) << endl;
	cout << triangle.description(longue);
	cout << "Perimetre : " << triangle.perimetre() << endl;
	cout << "Aire : " << triangle.aire() << endl;
	cout << "Volume : " << triangle.volume() << endl << endl;

	cCarre carre(4);
	//cout << "Carre :" << endl;
	cout << "Je suis un " << carre.description(courte) << endl;
	cout << carre.description(longue);
	cout << "Perimetre = " << carre.perimetre() << endl;
	cout << "Aire = " << carre.aire() << endl;
	cout << "Volume = " << carre.volume() << endl << endl;

	cRectangle rectangle(5, 4);
	//cout << "Rectangle : " << endl;
	cout << "Je suis un : " << rectangle.description(courte) << endl;
	cout << rectangle.description(longue);
	cout << "Perimetre = " << rectangle.perimetre() << endl;
	cout << "Aire = " << rectangle.aire() << endl;
	cout << "Volume = " << rectangle.volume() << endl << endl;

	cCercle cercle(2);
	//cout << "Cercle : " << endl;
	cout << "Je suis un : " << cercle.description(courte) << endl;
	cout << cercle.description(longue);
	cout << "Perimetre = " << cercle.perimetre() << endl;
	cout << "Aire = " << cercle.aire() << endl;
	cout << "Volume = " << cercle.volume() << endl << endl;

	cCube cube(6);
	//cout << "Cube : " << endl;
	cout << "Je suis un : " << cube.description(courte) << endl;
	cout << cube.description(longue);
	cout << "Perimetre = " << cube.perimetre() << endl;
	cout << "Aire = " << cube.aire() << endl;
	cout << "Volume = " << cube.volume() << endl << endl;

	cParallelepipede parallelepipede(5, 4, 9);
	//cout << "Parallelepipede : " << endl;
	cout << "Je suis un : " << parallelepipede.description(courte) << endl;
	cout << parallelepipede.description(longue);
	cout << "Perimetre = " << parallelepipede.perimetre() << endl;
	cout << "Aire = " << parallelepipede.aire() << endl;
	cout << "Volume = " << parallelepipede.volume() << endl << endl;

	cSphere sphere(3);
	//cout << "Sphere : " << endl;
	cout << "Je suis un : " << sphere.description(courte) << endl;
	cout << sphere.description(longue);
	cout << "Perimetre = " << sphere.perimetre() << endl;
	cout << "Aire = " << sphere.aire() << endl;
	cout << "Volume = " << sphere.volume() << endl << endl;
	   
	//Repr�sente une figure
	cFigure *fig;

	//Liste de figures
	list<cFigure *> liste; 

	//It�rateur qui permet de parcourir la liste
	list<cFigure *>::iterator iL; 
	
	//Fichier
	fstream *fichier = nullptr; 

	//Chaine pour manipuler la r�ception de figures
	string strFigure;

	//Variables qui prendront les valeurs � afficher dans la console et le fichier
	int n_x;
	int n_y;
	int n_z;

	double dbl_base;
	double dbl_hauteur;
	double dbl_largeur;
	double dbl_longueur;
	double dbl_rayon;
	double dx;
	double dy;

	//Ajoute � la liste de figures, toutes les figures cr��es
	liste.push_back(&triangle);
	liste.push_back(&carre); 
	liste.push_back(&rectangle); 
	liste.push_back(&cercle); 
	liste.push_back(&cube); 
	liste.push_back(&parallelepipede); 
	liste.push_back(&sphere);

	//Ouvre un fichier
	fichier = new fstream("Figures.txt", fstream::out);

	//Tant que l'it�rateur n'a pas atteint la fin de la liste
	for (iL = liste.begin(); iL != liste.end(); iL++)
	{
		//fig prend la figure a l'index de la liste iL
		fig = *iL;

		//Ecrit dans le fichier le nom de la figure, ainsi que ses valeurs
		*fichier << fig->description(courte) << " " << fig->toString() << endl;
	}

	//Ferme le fichier
	fichier->close();

	//D�r�f�rence le pointeur de fichier
	delete fichier;

	//Ouvre � nouveau ce fichier
	fichier = new fstream("Figures.txt", fstream::in);

	//Stocke le contenu du fichier dans une chaine
	*fichier >> strFigure;

	//Tant que la fin du fichier n'est pas atteinte, v�rifie chaque ligne, en fonction de son en-t�te il
	//retourne dans la console les donn�es xyz, puis celles correspondantes � la figure.
	while (!fichier->eof())
	{
		*fichier >> n_x >> n_y >> n_z; 
		cout << strFigure;
		cout << " " << n_x << " " << n_y << " " << n_z;
		if (strFigure == "Figure") cout << endl;
		if (strFigure == "Triangle")
		{
			*fichier >> dbl_base >> dbl_hauteur;
			cout << " " << dbl_base << " " << dbl_hauteur << endl;
		}
		if (strFigure == "Carre")
		{
			*fichier >> dbl_largeur;
			cout << " " << dbl_largeur << endl;
		}
		if (strFigure == "Rectangle")
		{
			*fichier >> dbl_largeur >> dbl_longueur; cout << dbl_largeur << dbl_longueur << endl;
		}
		if (strFigure == "Cercle")
		{
			*fichier >> dbl_rayon; cout << dbl_rayon << endl;
		}
		if (strFigure == "Cube")
		{
			*fichier >> dbl_largeur; cout << dbl_largeur << endl;
		}
		if (strFigure == "Parallelepipede")
		{
			*fichier >> dbl_largeur >> dbl_longueur >> dbl_hauteur >> dx >> dy;
			cout << dbl_largeur << dbl_longueur << dbl_hauteur << dx << dy << endl;
		}
		if (strFigure == "Sphere")
		{
			*fichier >> dbl_rayon; cout << dbl_rayon << endl;
		}

		//Si retour � la ligne, alors strFigure prend nouvelle valeur
		while (fichier->get() != '\n');
		*fichier >> strFigure;

		
	}
	
	//Ferme le fichier et d�salloue le pointeur
	fichier->close();
	delete fichier;
		
	cout << endl;
	system("pause");
	return 0;
}

