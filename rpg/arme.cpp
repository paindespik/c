#include "arme.h"
#include <iostream>
#include <string>
using namespace std;
Arme::Arme(){
	m_degats=10;
	m_nom="vielle épé rouillée";
}

Arme::Arme(string nom, int degats){
	m_degats=degats;
	m_nom=nom;
}
void Arme::afficher() const{
	cout << "arme : " << m_nom << endl;
	cout << "degats : " << m_degats << endl;
}

int Arme::getDegats(){
	return m_degats;
}

