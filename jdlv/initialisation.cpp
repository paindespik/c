#include <iostream>
#include "initialisation.h"
using namespace std;
#include <ctime>
#include <cstdlib>

vector<vector<bool>> initialiser(vector<vector<bool>> tab, int nb, int longueur, int largeur){
	int i(0), j(0), k(0);
	for (i=0; i<largeur; i++){
		tab.push_back(vector<bool>(longueur,false));
	}
	srand(time(0));
    
    while(k<nb){
    	
    	i=rand()%(tab.size()/9)+tab.size()*4/9;
    	j=rand()%(tab[0].size()/9)+tab[0].size()*4/9;
    	tab[i][j]=true;

    	k++;
    }

    return tab;
}