#include <iostream>
#include "personnage.h"
#include "arme.h"
using namespace std;

Personnage::Personnage(string nom){
	m_nom=nom;
	m_vie=100;
	m_mana=100;
	m_force=100;
	m_arme=new Arme();
}
Personnage::Personnage(Personnage const& personnageACopier):m_vie(personnageACopier.m_vie),m_mana(personnageACopier.m_mana),m_arme(0)
{
	m_arme=new Arme(*(personnageACopier.m_arme));
}
Personnage& Personnage::operator=(Personnage const& personnageACopier){
	if (this!= &personnageACopier){
		m_vie=personnageACopier.m_vie;
		m_mana=personnageACopier.m_mana;
		m_force=personnageACopier.m_force;
		delete m_arme;
		m_arme=new Arme(*(personnageACopier.m_arme));
	}
	return *this;

}

Personnage::Personnage(string nom, string nomArme, int degats):m_arme(0), m_nom(nom), m_vie(100), m_mana(100)
{
	m_arme=new Arme(nomArme, degats);
}
void Personnage::afficher() const
{
	cout << m_nom << " : " << endl;
	cout << "Vie : " << m_vie << endl;
	cout << "Mana : " << m_mana << endl;
	cout << "Force : " << m_force << endl;
	m_arme->afficher();
	cout << endl;
}
Personnage::~Personnage()
{
	delete m_arme;
}

void Personnage::attaquer(Personnage &cible)
{
cible.recevoirDegats(m_arme->getDegats());
}
void Personnage::recevoirDegats(int degats){
	m_vie-=degats;
}
