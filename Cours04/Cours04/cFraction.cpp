#include "cFraction.h"



void cFraction::afficher() const
{
	cout << m_nominateur << "/" << m_denominateur << endl;
}



//Surcharge de l'opérateur <<
ostream& operator<<(ostream& flux, cFraction const& fraction)
{
	fraction.display(flux);
	return flux;
}
void cFraction::display(ostream& flux) const
{
	flux << m_nominateur << "/" << m_denominateur;
}
//---------------------------------------------------------------//

//Surcharge de l'opérateur +
cFraction& operator+(cFraction const& a, cFraction const& b)
{
	//a : 4/5   b: 2/1
	cFraction resultat;

	float coef = 0;

	//si 5 > 1
	if (a.getDenominateur() >= b.getDenominateur())
	{
		//coef = 5/1
		coef = a.getDenominateur() / b.getDenominateur();

		////resultat.nominateur = 2 * 5
		resultat.setNominateur(b.getNominateur() * coef);

		////resultat.denominateur = 1 * 5
		resultat.setDenominateur(b.getDenominateur() * coef);

		//resultat : 10/5

		////resultat.nominateur = 10 + 4
		resultat.setNominateur(resultat.getNominateur() + a.getNominateur());


	}
	else
	{
		coef = b.getDenominateur() / a.getDenominateur();
		resultat.setNominateur(a.getNominateur() * coef);
		resultat.setDenominateur(a.getDenominateur() * coef);
		resultat.setNominateur(resultat.getNominateur() + b.getNominateur());
	}

	return resultat;


	

	




	return resultat;
}

cFraction& operator*(cFraction const& a, cFraction const& b)
{
	
}

//--------------------- Getters --------//
float cFraction::getNominateur() const
{
	return this->m_nominateur;
}
float cFraction::getDenominateur() const
{
	return this->m_denominateur;
}
//------------- Setters ---------//
void cFraction::setNominateur(float a)
{
	this->m_nominateur = a;
}
void cFraction::setDenominateur(float a)
{
	this->m_denominateur = a;
}











cFraction::cFraction() : m_nominateur(0), m_denominateur(0)
{
	
}

cFraction::cFraction(float a, float b) : m_nominateur(a), m_denominateur(b)
{

}


cFraction::~cFraction()
{
}
