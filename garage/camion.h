#ifndef DEF_CAMION
#define DEF_CAMION
#include <string>
#include "vehicule.h"

class Camion : public Vehicule{
public:
	Camion(int prix,int age, int poids);
	virtual void affiche() const;
	virtual void afficheAge() const;
	virtual ~Camion(); 
private:
	int poidsCargaison;
};

#endif