#include <string>
#include <iostream>
#include  "voiture.h"
using namespace std;

Voiture::Voiture(int prix, int age, int portes):Vehicule(prix,age), m_portes(portes)
{}
void Voiture::affiche() const
{
cout << "Ceci est une voiture avec " << m_portes << " portes et coutant " << m_prix << " euros." << endl;
}
void Voiture::afficheAge() const{
	cout << "Cette voiture a " << m_age << " ans" << endl;
}
Voiture::~Voiture()
{}