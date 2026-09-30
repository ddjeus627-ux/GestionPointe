#pragma once

class Point
{
private:
	float abscisse = 0;
	float ordonnee = 0;

public:
	float getAbscisse();
	float getOrdonnee();
	void setAbscisse(float abs);
	void setOrdonnee(float ordonnee);

	void affiche();
	void deplace(float versDroite, float versHaut);
	void distance();
	Point symetrie();
};