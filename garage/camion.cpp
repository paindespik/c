#include <string>
using namespace std;
#include "camion.h"
#include <iostream>

Camion::Camion(int prix, int age, int poids):Vehicule(prix,age), poidsCargaison(poids){

}

void Camion::affiche() const{
	cout << "c'est un camion, son prix est de " << m_prix << " euros et il peux transporter " << poidsCargaison<< " kilos" << endl; 
}
void Camion::afficheAge() const{
	cout << "l'age du camion est de " << m_age << " ans" << endl;
}

Camion::~Camion(){

}
