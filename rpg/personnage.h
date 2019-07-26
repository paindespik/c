#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include <string>
#include <iostream>
#include "arme.h"

class Personnage{
	public:
		Personnage(std::string nom);
		Personnage(std::string nom, std::string nomArme, int degats);
		void afficher() const;


	private:
		std::string m_nom;
		int m_vie;
		int m_mana;
		int m_force;
		Arme m_arme;
};

#endif