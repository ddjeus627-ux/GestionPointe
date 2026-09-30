#include "Point.h"
#include <iostream>

float Point::getAbscisse()
{
	return abscisse;
}

float Point::getOrdonnee()
{
	return ordonnee;
}

void Point::setAbscisse(float abs)
{
	this->abscisse = abs;
}

void Point::setOrdonnee(float ordonee)
{
	this->ordonnee = ordonee;
}

void Point::deplace(float versDroite, float versHaut)
{
	abscisse = abscisse + versDroite;
	ordonnee = ordonnee + versHaut;
}

void Point::distance()
{
	std::cout << "La distance par rapport est de :";
	std::cout << ((abscisse * abscisse) + (ordonnee * ordonnee)) << std::endl;
}

Point Point::symetrie()
{
	Point tmp;
	tmp.setAbscisse(-abscisse);
	tmp.setOrdonnee(-ordonnee);
	return tmp;
}

