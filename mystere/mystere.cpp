#include "melange.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <ctype.h>
#include <algorithm> 
#include <string>  
using namespace std;
int main() {
	ifstream monFlux("/home/driard/c++/mystere/mot.txt");
	vector<string> tab_mot;
	string essai;
	string mot;
	string melange;
	int nb_cout(4);
	char recommencer='o';
	if (monFlux){
		while (getline(monFlux,mot)){
			tab_mot.push_back(mot);
		}
	}

	while(recommencer=='o'){
			srand(time(0));
		mot=tab_mot[rand()%tab_mot.size()];



		melange=melanger(mot);
		cout << "le mot mélangé est " << melange << endl;
		cout << "quel est le mot mystère?:  " << endl;
		cin >> essai;
		transform(essai.begin(), essai.end(), essai.begin(), ::toupper);
		while (essai!=mot && nb_cout>0){
			cout <<"bad" <<endl;
			cout << "quel est le mot mystère?: (il vous reste "<< nb_cout <<") " << endl;
			cin >> essai;
			nb_cout--;
		}
		cout << "good" << endl;
		cout << "voulez-vous recommencer? : (o/n) "<<endl;
		cin >> recommencer;
		}




}