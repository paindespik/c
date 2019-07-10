
#include <iostream>
#include "math.h"
using namespace std;

int main()
{
	int beuleu[5];
	beuleu[0]=1;
	beuleu[1]=2;
	beuleu[2]=3;
	beuleu[3]=4;
	beuleu[4]=5;
	int taille=sizeof(beuleu)/sizeof(int);
	int moyenne1= moyenne(beuleu,taille);
	cout <<  "la moyenne est " << moyenne1 << endl;
    return 0;
}
