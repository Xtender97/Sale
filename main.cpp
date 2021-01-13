#include <iostream>
using namespace std;

#include "Tim.h"
#include "Privilegovani_tim.h"
#include "Par.h"
#include"Mec.h"
int main() {

	Igrac i1("ime1");
	Igrac i2("ime2", 2000);
	Igrac i3("ime3", 3000);

	Tim t1("tim1", 5);

	t1.prikljuciIgraca(&i1, 1);
	t1.prikljuciIgraca(&i2, 2);
	t1.prikljuciIgraca(&i3, 4);

	cout << t1;

	Igrac i4("ime4");
	Igrac i5("ime5", 4000);
	Igrac i6("ime6", 6000);
	
	Privilegovani_tim t2("tim2", 5, 0);

	t2.prikljuciIgraca(&i4, 1);
	t2.prikljuciIgraca(&i5, 2);
	t2.prikljuciIgraca(&i6, 4);
	
	cout << t2;
	
	Mec m1(t1, t2);

	cout << m1.dohvatiPar()->dohvatiPrvi()->dohvatiVrednostTima() << endl;

	cout << m1.dohvatiPar()->dohvatiDrugi()->dohvatiVrednostTima() << endl;

	
	m1.odigrajMec();

	cout << m1 << endl;

	// cout << t1 << endl;
		
	// cout << t2 << endl;

	
	



	
}