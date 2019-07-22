#include <iostream>
#include "melange.h"
using namespace std;
#include <ctime>
#include <cstdlib>

string melanger(string mot){
	
	int position;
	string melange;
	while(mot.size()!=0){
		position = rand()%mot.size();
		melange+=mot[position];
		mot.erase(position,1);
	}
	return melange;
}