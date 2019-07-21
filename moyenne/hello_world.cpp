
#include <iostream>
#include "math.h"
#include <vector>
#include <fstream>
using namespace std;

int main()
{

   vector<double> notes; //Un tableau vide

ifstream monFlux("/home/driard/c++/moyenne/notes.txt");
string ligne;
if (monFlux){
	while(getline(monFlux,ligne)){
		notes.push_back(atof(ligne.c_str()));
	
			
	}
	
	
}
else{
	cout << "ca marche po" << endl;
}
	double moyenne1= moyenne(notes);
	cout <<  "la moyenne est " << moyenne1 << endl;
    return 0;
}
