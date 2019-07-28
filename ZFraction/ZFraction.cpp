#include "ZFraction.h"
#include <iostream>
using namespace std;

ZFraction::ZFraction(int a, int b){
	m_a=a;
	m_b=b;
	decimal=a/b;
}
ZFraction::ZFraction(int a){
	m_a=a;
	m_b=1;
	decimal=a;
}
ZFraction::ZFraction(){
	m_a=0;
	m_b=1;
	decimal=0;
}
void ZFraction::afficher(){
	cout<< m_a <<"/"<<m_b<<endl;
}

ZFraction ZFraction::addition(ZFraction b){
	int up;
	int down;
	if (m_b!=b.m_b){
		down=m_b*b.m_b;
		up=m_a*b.m_b+b.m_a*m_b;
	}
	else{
		down=m_b;
		up=m_a+b.m_a;
	}
	ZFraction beuleu(up,down);
	return beuleu;
}

ZFraction ZFraction::multiplication(ZFraction b){
	int up;
	int down;
	up=m_a*b.m_a;
	down=m_b*b.m_b;
	ZFraction resultat(up, down);
	return resultat;
}

void ZFraction::simplification(){
	int A, B, r;
	if (m_a>m_b){
		A=m_a;
		B=m_b;
	}
	else{
		A=m_b;
		B=m_a;
	}

	while(B!=0){
		r=A%B;
		A=B;
		B=r;
	}

	m_a=m_a/A;
	m_b=m_b/A;
}

void ZFraction::afficher(ostream &flux) {
	flux << m_a << "/" << m_b;
}

bool ZFraction::superieur(ZFraction b){
	return decimal>b.decimal;
}

bool ZFraction::egal(ZFraction b){
	if(m_a==b.m_a && m_b==b.m_b){
		return true;
	}
	return false;
}

ZFraction operator+(ZFraction& a, ZFraction& b){
	return a.addition(b);
}
ZFraction operator*(ZFraction& a, ZFraction& b){
	return a.multiplication(b);
}

ostream &operator<<(ostream &flux, ZFraction& a){
	a.afficher(flux);
	return flux;
}

bool operator>(ZFraction a, ZFraction b){
	return a.superieur(b);
}

bool operator==(ZFraction a, ZFraction b){
	return a.egal(b);
}