#include "math.h"
#include <iostream>
using namespace std;
int moyenne(int nombreRecu[],int taille)
{
	int tot=0;
    for (int i=0;i<taille;i++){
    	cout << nombreRecu[i] << endl;
    	tot+=nombreRecu[i];
    }
    tot=tot/taille;
    return tot;
}



