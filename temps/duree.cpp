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