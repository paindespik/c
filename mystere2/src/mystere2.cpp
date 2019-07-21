#include <iostream>
#include <vector>
#include <limits>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include  "melanger.h"
using namespace std;




int main(){
	cout << "quel est votre mot mystère?: " <<endl;
	string essai;
	string mystere;
	string melange;
	cin >> mystere;

	melange=melanger(mystere);
	cout  << "le mot mélangé est " << melange << endl;
	cout  <<"quel est le mot mystère? : "<< endl;
	cin >>  essai;
	if(essai==mystere){
		cout << "bravo!! " << mystere << " était effectivement le mot mystere" << endl;
	}
	else{
		cout << "ce n'est pas le bon mot, il faut réessayer" << endl;
	}
}
