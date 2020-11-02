#include "ObjetFactory.h"



ObjetFactory::ObjetFactory()
{
}


ObjetFactory::~ObjetFactory()
{
}

Objet* ObjetFactory::Create(int type) const
{
	switch (type)
	{
	case 1:
		return new ObjetA();
		break;
	case 2:
		return new ObjetB();
	default:
		break;
	}
}