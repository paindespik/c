#include <iostream>
#include "personnage.h"
#include "arme.h"
using namespace std;

Personnage::Personnage(string nom){
	m_nom=nom;
	m_vie=100;
	m_mana=100;
	m_force=100;
}
Personnage::Personnage(string nom, string nomArme, int degats):m_nom(nom), m_vie(100), m_mana(100), m_force(100), m_arme(nomArme,degats)
{

}
void Personnage::afficher() const
{
	cout << m_nom << " : " << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	cout << "Force : " << m_force << endl;
	m_arme.afficher();
}


