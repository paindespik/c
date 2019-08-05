#include <string>
#include <iostream>
using namespace std;
#include "vehicule.h"

Vehicule::Vehicule(int prix, int age):m_prix(prix), m_age(age)
{}
void Vehicule::affiche() const
{
cout << "Ceci est un vehicule coutant " << m_prix << " euros." << endl;
}
void Vehicule::afficheAge() const{
	cout << " Ce vehicule a " << m_age << " ans" << endl;
}
Vehicule::~Vehicule() 
{}