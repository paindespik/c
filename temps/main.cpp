#include <iostream>
#include "duree.h"
#include "additionner.h"
using namespace std;

int main(){
	Duree temps1(4000);
	temps1.afficher();
	Duree temps2(5000);
	temps2.afficher();
	if (temps1==temps2){
		cout << "bleu"<< endl;
	}
	if (temps1!=temps2){
		if (temps1<temps2){
			cout << "temps1 est inférieur à temps2" << endl;
		}
		else{
			cout << "temps1 est supérieur à temps2" << endl;
		}
		
	}

	Duree temps3 =temps1+temps2;
	cout << temps3;
}