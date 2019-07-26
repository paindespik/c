#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE
#include <string>

class Arme{
	public:
		Arme();
		Arme(std::string nom, int degats);
		void changerArme();
		void afficher() const;

	private:
		int m_degats;
		std::string m_nom;

};

#endif