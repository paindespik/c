#include "aff.h"
#include <iostream>
using namespace std;

void affichage(vector<vector<bool>> tab){
	int i(0),j(0);
	for (i=0; i<tab.size(); i++){
		cout <<endl;
		for(j=0; j<tab[0].size();  j++){
			if (tab[i][j]==true){
				cout << "|X|";
			}
			else{
				cout << "| |";
			}
		}
	}


}