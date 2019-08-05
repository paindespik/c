#ifndef DEF_VOITURE
#define DEF_VOITURE
#include <string>
#include "vehicule.h"

class Voiture: public Vehicule
{
public:
	Voiture(int prix, int age, int portes);
	
	virtual void affiche() const;
	virtual ~Voiture();
	virtual void afficheAge() const;
private:
	int m_portes;
};


#endif