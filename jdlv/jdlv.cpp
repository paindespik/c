#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include "aff.h"
#include "initialisation.h"
#include "tour.h"
#include <chrono>
#include <thread>
using namespace std;

const int largeur=35;
const int longueur=35;
int nb_vivant=150;
int main()
{
	vector<vector<bool>> tab;
	
	tab=initialiser(tab,nb_vivant, largeur, longueur);
	int i(0), j(0), k(0);

	affichage(tab);
	while(nb_vivant>0){
		tab=prochain_tour(tab);
		nb_vivant=0;
		for (i=0;i<largeur;i++){
			for (j=0;j<longueur;j++){
				if (tab[i][j]==true){
					nb_vivant++;
				}
			}
		}
		cout << endl;
		puts("Appuyer sur Enter pour continuer");
		while (getchar() != '\n')
    	;
		cout << endl;
		affichage(tab);
		
	
	}


	return 0;
}