#ifndef DEF_MOTO
#define DEF_MOTO
#include <string>
#include "vehicule.h"

class Moto : public Vehicule
{
public:
	Moto(int prix, int age, double vitesseMax);
	virtual void afficheAge() const;
	virtual void affiche() const;
	virtual ~Moto();
private:
	double m_vitesse;
};

#endif