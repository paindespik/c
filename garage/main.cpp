#include <string>
using namespace std;
#include "vehicule.h"
#include "voiture.h"
#include "moto.h"
#include "camion.h"
#include "garage.h"
#include <iostream>
#include <vector>
void presenter(Vehicule const& a){
	a.affiche();
}
int main(){

	Garage beuleu;
	beuleu.ajouterVoiture(10000,5,4);
	beuleu.ajouterCamion(5000,5,1000);
	beuleu.affiche();
	cout<<endl;
	beuleu.afficheNumero(1);
	beuleu.viderMemoire();



	return 0;
}