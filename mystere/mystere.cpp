#include "melange.h"
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;
int main() {
	string essai;
	string mot;
	string melange;
	cout << "quel est votre mot mystère?" << endl;
	cin >> mot;
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