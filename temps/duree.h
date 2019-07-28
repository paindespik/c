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
	bool estEgal(Duree const& b) const;
	bool estInf(Duree const& b) const;
	void afficher (std::ostream &flux) const;


private:
	int nb_heures;
	int nb_minutes;
	int nb_secondes;
};
bool operator==(Duree const& a, Duree const& b);
bool operator!=(Duree const& a, Duree const& b);
bool operator<(Duree const& a, Duree const& b);
Duree operator+(Duree const& a, Duree const& b);
std::ostream &operator<<(std::ostream &flux, Duree const& duree);

#endif