#ifndef _igrac_h_
#define _igrac_h_

#include <string>
#include<iostream>
using namespace std;
class Igrac {

	string ime;
	int vrednost;


public:
	Igrac(string i, int vr = 1000):ime(i), vrednost(vr){} 
//	Igrac() {};

	int dohvVrednost() const { return vrednost; }
	string dohvIme() const { return ime; }

	void povecajVrednost(int proc);
	void smanjiVrednost(int proc);

	friend bool operator==(const Igrac& i1, const Igrac& i2) {
		if (i1.ime == i2.ime && i1.vrednost == i2.vrednost)return true;
		return false;
	}

	friend ostream& operator<<(ostream& it, const Igrac& i) {
		it << i.ime << "#" << i.vrednost;
		return it;
	}
};



#endif _igrac_h_
