#include <string>
#include <vector>
#include <iostream>
using namespace std;
#include "garage.h"
#include "vehicule.h"
#include "voiture.h"
#include "moto.h"
#include "camion.h"

void Garage::affiche() const{
	int i=0;
	while (i<listeVehicules.size()){
		listeVehicules[i]->affiche();

		i++;
	}
}

void Garage::ajouterVehicule(int prix, int age){
	listeVehicules.push_back(new Vehicule(prix, age));
}

void Garage::ajouterVoiture(int prix, int age,int portes){
	listeVehicules.push_back(new Voiture(prix, age, portes));
}

void Garage::ajouterMoto(int prix, int age,double vitesse){
	listeVehicules.push_back(new Moto(prix, age, vitesse));
}

void Garage::ajouterCamion(int prix, int age, int poids){
	listeVehicules.push_back(new Camion(prix, age, poids));
}

Garage::~Garage(){

}

void Garage::viderMemoire(){
	for (int i=0; i<listeVehicules.size();i++){
		delete listeVehicules[i];
		listeVehicules[i]=0;
	}
}

void Garage::afficheNumero(int num) const{
	listeVehicules[num]->affiche();
}