#include <iostream>
#include "tour.h"
using namespace std;
#include <ctime>
#include <cstdlib>
#include "aff.h"

vector<vector<bool>> prochain_tour(vector<vector<bool>> tab){
	int i(0),j(0),nb(0);
	vector<vector<bool>> tab2;
	for (i=0; i<tab.size(); i++){
		tab2.push_back(vector<bool>(tab[0].size(),false));
	}
	for (i=0;i<tab.size();i++){
		for (j=0;j<tab[0].size();j++){

			nb=0;
			if(i!=0){
				if(tab[i-1][j]==true){
					nb++;
				}
			}

			if(j!=0){
				if(tab[i][j-1]==true){
					nb++;
				}
			}
			if(i!=(tab.size()-1)){
				if(tab[i+1][j]==true){
					nb++;
				}
			}

			if(j!=(tab[0].size()-1)){
				if(tab[i][j+1]==true){
					nb++;
				}
			}

			if(i!=0 && j!=0){
				if(tab[i-1][j-1]==true){
					nb++;
				}
			}
			if(i!=0 && j!=(tab[0].size()-1)){
				if(tab[i-1][j+1]==true){
					nb++;
				}
			}
			if(i!=(tab.size()-1) && j!=0){
				if(tab[i+1][j-1]==true){
					nb++;
				}
			}
			if(i!=(tab.size()-1) && j!=(tab[0].size()-1)){
				if(tab[i+1][j+1]==true){
					nb++;
				}
			}



			if((nb<2 || nb>3) && tab[i][j]==true){
				tab2[i][j]=true;
			}
			if (nb==3 && tab[i][j]==false){
				tab2[i][j]=true;
			}


		}

	}




	for (i=0;i<tab.size();i++){
		for (j=0;j<tab[0].size();j++){
			if(tab2[i][j]==true){
				if(tab[i][j]==true){
					tab[i][j]=false;
				}
				else{
					tab[i][j]=true;
				}
			}
		}
	}
	return tab;
}