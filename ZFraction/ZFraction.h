#ifndef ZFRACTION_H_INCLUDED
#define ZFRACTION_H_INCLUDED
#include <string> 
#include <iostream>

class ZFraction{
public:
	ZFraction(int a, int b);
	ZFraction(int a);
	ZFraction();
	void afficher();
	ZFraction addition(ZFraction b);
	ZFraction multiplication(ZFraction b);
	void simplification();
	void afficher(std::ostream &flux) ;
	bool superieur(ZFraction b);
	bool egal(ZFraction b);

private:
	int m_a, m_b;
	double decimal;
};

ZFraction operator+(ZFraction& a, ZFraction& b);
ZFraction operator*(ZFraction& a, ZFraction& b);
std::ostream &operator<<(std::ostream &flux, ZFraction& a);
bool operator>(ZFraction a, ZFraction b);
bool operator==(ZFraction a, ZFraction b);

#endif