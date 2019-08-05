#ifndef DEF_VEHICULE
#define DEF_VEHICULE
#include <string>

class Vehicule
{
public:
	Vehicule(int prix, int age);
	virtual void affiche() const;
	virtual ~Vehicule();
	virtual void afficheAge() const;
	//Remarquez le 'virtual' ici
protected:
	int m_prix;
	int m_age;
};


#endif