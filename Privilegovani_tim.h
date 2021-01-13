#ifndef _privilegovani_h_
#define _privilegovani_h_

#include"Tim.h"

class Greska {
	friend ostream& operator<<(ostream& it, const Greska&) {
		it << "***  ***";
		return it;
	}
};



class Privilegovani_tim : public Tim {
	int minimalnaVrednost;

public:
	Privilegovani_tim(string ime, int max, int min) :Tim(ime, max) {
		minimalnaVrednost = min;
	}

	~Privilegovani_tim() {}

	void prikljuciIgraca(Igrac* igrac, int pozicija) ;

	friend ostream& operator<<(ostream& it, const Privilegovani_tim& tim) {
	
		it << tim.naziv << "(" << tim.minimalnaVrednost<<") [";
		for (int i = 0; i < tim.kap; i++) {

			if (&tim[i] == nullptr)continue;
			it << tim[i];
			if (i != tim.kap - 1) {
				it << ",";
			}

		}
		it << "]" << endl;
		return it;
	}



};

#endif _privilegovani_h_