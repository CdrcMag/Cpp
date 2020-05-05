#include <iostream>
#include <iomanip>
#include <list>
#include <fstream>

class cFigure;

#include "cTriangle.h"
#include "cCarre.h"
#include "cCube.h"
#include "cRectangle.h"
#include "cCercle.h"
#include "cSphere.h"
#include "cParallelepipede.h"

using namespace std;

//Prototypes
void afficherAire(const cFigure&);
void afficherVolume(const cFigure&);

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



	//cFigure *cFig;

	//cFigure *fig; list<cFigure *> liste; 
	//list<cFigure *>::iterator iL; 
	//
	//fstream *fichier = NULL; string strFigure;

	//int n_x;
	//int n_y;
	//int n_z;

	//double dbl_base;
	//double dbl_hauteur;
	//double dbl_largeur;
	//double dbl_longueur;
	//double dbl_rayon;
	//double dx;
	//double dy;


	//liste.push_back(&triangle);
	//liste.push_back(&carre); 
	//liste.push_back(&rectangle); 
	//liste.push_back(&cercle); 
	//liste.push_back(&cube); 
	//liste.push_back(&parallelepipede); 
	//liste.push_back(&sphere);




	cout << endl;
	system("pause");
	return 0;
}


void afficherAire(const cFigure &fig)
{
	cout << to_string(fig.aire()) << endl;
}

void afficherVolume(const cFigure &fig)
{
	cout << to_string(fig.volume()) << endl;
}

