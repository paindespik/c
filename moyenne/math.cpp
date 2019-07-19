#include "math.h"
#include <iostream>
#include <vector>
using namespace std;
double moyenne(vector<double> nombreRecu)
{
	double tot=0;
    for (int i=0;i<nombreRecu.size();i++){
    	cout << nombreRecu[i] << endl;
    	tot+=nombreRecu[i];
    }
    tot=tot/nombreRecu.size();
    return tot;
}



