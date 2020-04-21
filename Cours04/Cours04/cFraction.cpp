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
		coef = a.getDenominateur() / b.getDenominateur();

		resultat.setNominateur(b.getNominateur() * coef);

		resultat.setDenominateur(b.getDenominateur() * coef);

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
	cFraction resultat(a.getNominateur() * b.getNominateur(), a.getDenominateur() * b.getDenominateur());

	return resultat;
}

bool operator>(cFraction const& a, cFraction const& b)
{

	// Récupère les nominateurs et dénominateurs des deux fractions passées
	float aN = a.getNominateur();
	float aD = a.getDenominateur();
	float bN = b.getNominateur();
	float bD = b.getDenominateur();

	//Les passe au même dénominateur
	aN = aN * bD;
	aD = aD * bD;
	bN = bN * a.getDenominateur();
	bD = bD * a.getDenominateur();

	//Traitement en fonction de l'opérateur
	if (aN == bN)
	{
		return false;
	}

	if (aN > bN)
	{
		return true;
	}

	if (aN < bN)
	{
		return false;
	}

	

}

bool operator<(cFraction const& a, cFraction const& b)
{

	// Récupère les nominateurs et dénominateurs des deux fractions passées
	float aN = a.getNominateur();
	float aD = a.getDenominateur();
	float bN = b.getNominateur();
	float bD = b.getDenominateur();

	//Les passe au même dénominateur
	aN = aN * bD;
	aD = aD * bD;
	bN = bN * a.getDenominateur();
	bD = bD * a.getDenominateur();

	//Traitement en fonction de l'opérateur
	if (aN == bN)
	{
		return false;
	}

	if (aN < bN)
	{

		return true;
	}

	if (aN > bN)
	{
		return false;
	}

	

}

bool operator==(cFraction const& a, cFraction const& b)
{
	// Récupère les nominateurs et dénominateurs des deux fractions passées
	float aN = a.getNominateur();
	float aD = a.getDenominateur();
	float bN = b.getNominateur();
	float bD = b.getDenominateur();

	//Les passe au même dénominateur
	aN = aN * bD;
	aD = aD * bD;
	bN = bN * a.getDenominateur();
	bD = bD * a.getDenominateur();

	//Traitement en fonction de l'opérateur
	if (aN == bN)
	{
		return true;
	}
	else
	{
		return false;
	}


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




//Constructeurs
cFraction::cFraction() : m_nominateur(0), m_denominateur(0)
{
	
}

cFraction::cFraction(float a, float b) : m_nominateur(a), m_denominateur(b)
{

}


//Destructeur
cFraction::~cFraction()
{
}
