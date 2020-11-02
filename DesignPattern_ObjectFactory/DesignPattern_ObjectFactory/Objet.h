#pragma once

#include <string>
using namespace std;

class Objet
{

public:
	Objet();
	virtual ~Objet();
	virtual string Operation() const = 0;
	
};

