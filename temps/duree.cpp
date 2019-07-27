#include "duree.h"
#include <iostream>
using namespace std;

Duree::Duree(int nombres){
	nb_heures=nombres/3600;
	nombres=nombres%3600;
	nb_minutes=nombres/60;
	nombres=nombres%60;
	nb_secondes=nombres;

}

Duree::Duree(int heures, int minutes, int secondes){
	

	nb_heures=heures;
	nb_minutes=minutes;
	nb_secondes=secondes;
}

int Duree::tempsSecondes(){
	int secondes=nb_heures*3600+nb_minutes*60+nb_secondes;
	return secondes;
}

 void Duree::afficher() const
 {
 	cout << nb_heures <<" : " << nb_minutes << " : " << nb_secondes << endl;
 }

bool Duree::estEgal(Duree const& b) const
{
    //Teste si a.m_heure == b.m_heure etc.  
    if (nb_heures == b.nb_heures && nb_minutes == b.nb_minutes && nb_secondes == b.nb_secondes)
        return true;
    else
        return false;
}


 bool operator==(Duree const& a, Duree const& b){
 	return a.estEgal(b);
 }