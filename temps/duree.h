#ifndef DUREE_H_INCLUDED
#define DUREE_H_INCLUDED

#include <string>

class Duree
{
public:
	Duree(int nombres);
	Duree(int heures,  int minutes, int secondes);
	int tempsSecondes();
	void afficher() const;


private:
	int nb_heures;
	int nb_minutes;
	int nb_secondes;
};

#endif