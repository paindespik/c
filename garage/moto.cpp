#include "moto.h"
#include <string>
#include <iostream>
using namespace std;


Moto::Moto(int prix, int age, double vitesseMax):Vehicule(prix,age), m_vitesse(vitesseMax)
{}
void Moto::affiche() const
{

cout << "Ceci est une moto allant a " << m_vitesse << " km/h et coutant " << m_prix << " euros." << endl;
}
void Moto::afficheAge() const{
	cout << "Cette moto a " << m_age << " ans";
}
Moto::~Moto()
{}

