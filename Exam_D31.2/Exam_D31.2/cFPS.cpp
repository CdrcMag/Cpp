#include "cFPS.h"



void cFPS::sePresenter() const
{
	cJeu::sePresenter();
	cout << " et je suis a la place " << m_place << " sur " << nbr_Instance << endl;
}



cFPS::cFPS() : cJeu("FPS"), m_place(nbr_Instance)
{

}


cFPS::~cFPS()
{
}
