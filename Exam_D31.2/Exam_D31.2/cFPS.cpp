#include "cFPS.h"


//M�thode virtuelle h�rit�e
void cFPS::sePresenter() const
{
	cJeu::sePresenter();
	cout << " et je suis a la place " << m_place << " sur " << nbr_Instance << endl;
}



//Constructeur
cFPS::cFPS() : cJeu("FPS"), m_place(nbr_Instance)
{

}

//Destructeur
cFPS::~cFPS()
{
}
