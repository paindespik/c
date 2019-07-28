#include "duree.h"
#include "additionner.h"
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

bool Duree::estInf(Duree const& b) const{
	if(nb_heures< b.nb_heures){
		return true;
	}
	else if (nb_heures==b.nb_heures){
		if(nb_minutes<b.nb_minutes){
			return true;
		}
		else if (nb_minutes==b.nb_minutes){
			if (nb_secondes<b.nb_secondes){
				return true;
			}
			else{
				return false;
			}
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}

void Duree::afficher (ostream &flux) const{
	 flux << nb_heures << "h" << nb_minutes << "m" << nb_secondes << "s";
}



 bool operator==(Duree const& a, Duree const& b){
 	return a.estEgal(b);
 }

 bool operator!=(Duree const& a, Duree const& b){
 	if (a.estEgal(b)){
 		return false;
 	}
 	return true;
 }
 bool operator<(Duree const& a, Duree const& b){
 	return a.estInf(b);
 }

 Duree operator+(Duree const& a, Duree const& b){
 	return Additionner(a,b);
 }

 ostream &operator<<(ostream &flux, Duree const& duree){
	duree.afficher(flux);
	return flux;
}