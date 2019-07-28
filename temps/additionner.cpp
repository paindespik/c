#include "additionner.h"
#include "duree.h"
#include <iostream>
using namespace std;

Duree Additionner(Duree temps1, Duree temps2){
	int nb_secondes=temps1.tempsSecondes()+ temps2.tempsSecondes();
	Duree tot(nb_secondes);
	return tot;
}

