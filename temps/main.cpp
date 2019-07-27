#include <iostream>
#include "duree.h"
#include "additionner.h"
using namespace std;

int main(){
	Duree temps1(5000);
	temps1.afficher();
	Duree temps2(5000);
	temps2.afficher();
	if (temps1==temps2){
		cout << "bleu"<< endl;
	}
	Duree temps3 = Additionner(temps1,temps2);
	temps3.afficher();
}