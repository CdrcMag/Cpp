#include <iostream>

class cFigure;

#include "cTriangle.h"
#include "cCarre.h"
#include "cCube.h"

using namespace std;

//Prototypes
void afficherAire(const cFigure&);
void afficherVolume(const cFigure&);

/*
	Notes : 

	- Triangle : cTriangle(base, hauteur, posX, posY)
	- Carre : cCarre(largeur, posX, posY)
	- Cube : cCube(largeur, posX, posY)


*/
int main(void)
{

	cTriangle a(5, 12, 3,9);
	cCarre b(4, 1, 6);
	cCube c(3, 5, 9);







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

