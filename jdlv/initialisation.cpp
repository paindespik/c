#include <iostream>
#include "initialisation.h"
using namespace std;
#include <ctime>
#include <cstdlib>

vector<vector<bool>> initialiser(vector<vector<bool>> tab, int nb, int longueur, int largeur){
	int i(0), j(0), k(0);
	for (i=0; i<longueur; i++){
		tab.push_back(vector<bool>(largeur,false));
	}
	srand(time(0));
    
    while(k<nb){
    	
    	i=rand()%tab.size();
    	j=rand()%tab[0].size();
    	tab[i][j]=true;

    	k++;
    }

    return tab;
}