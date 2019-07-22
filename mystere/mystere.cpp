#include "melange.h"
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
using namespace std;
int main() {
	ifstream monFlux("/home/driard/c++/mystere/mot.txt");
	vector<string> tab_mot;
	string essai;
	string mot;
	string melange;
	if (monFlux){
		while (getline(monFlux,mot)){
			tab_mot.push_back(mot);
		}
	}
	srand(time(0));
	mot=tab_mot[rand()%tab_mot.size()];



	melange=melanger(mot);
	cout << "le mot mélangé est " << melange << endl;
	cout << "quel est le mot mystère?:  " << endl;
	cin >> essai;
	while (essai!=mot){
		cout <<"bad" <<endl;
		cout << "quel est le mot mystère?:  " << endl;
		cin >> essai;
	}
	cout << "good" << endl;



}