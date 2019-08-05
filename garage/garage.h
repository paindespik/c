#ifndef DEF_GARAGE
#define DEF_GARAGE
#include <string>
#include "vehicule.h"
#include <vector>
class Garage {
public:
	virtual void affiche() const;
	void ajouterVehicule(int prix, int age);
	void ajouterVoiture(int prix, int age,int portes);
	void ajouterMoto(int prix, int age,double vitesse);
	void ajouterCamion(int prix, int age, int poids);
	virtual ~Garage();
	virtual void viderMemoire();
	virtual void afficheNumero(int num) const;

private:
	std::vector<Vehicule*> listeVehicules;
};

#endif