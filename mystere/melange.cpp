#include <iostream>
#include "melange.h"
using namespace std;
#include <ctime>
#include <cstdlib>
string melanger(string mot){
	srand(time(0));
	int position;
	string melange;
	while(mot.size()!=0){
		position = rand()%mot.size();
		melange+=mot[position];
		mot.erase(position,1);
		cout << mot.size() <<endl;
	}
	return melange;
}