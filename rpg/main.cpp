#include <iostream>
#include "personnage.h"
#include "arme.h"
using namespace std;

int main(){
	Personnage sean("sean"), pauline("Pauline","baguette_magique", 0);
	sean.afficher();
	pauline.afficher();
	sean=pauline;
	sean.afficher();
}