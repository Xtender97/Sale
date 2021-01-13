#ifndef _mec_h_
#define _mec_h_

#include "Par.h"
#include "Tim.h"

class GreskaMec {
	friend ostream& operator<<(ostream& it, const GreskaMec&) {
		it << "*** greska mec ***";
		return it;
	}
};


class Mec {
public:
	enum Ishod { POBEDA_DOMACIN, NERESENO, POBEDA_GOST, NIJE_ODIGRAN };
private:

	Par<Tim>* par;
	Ishod ishod;
	bool odigra;
	Par<int>* parpoena;


public:
	


	Mec(const Tim& domacin,const Tim& gost) {
		par = new Par<Tim>(domacin, gost);
		parpoena = new Par<int>();
		odigra = false;
		ishod = NIJE_ODIGRAN;
	}

	


	Par<Tim>* dohvatiPar() const { return this->par; }//c
	Par<int>* dohvatiParPoena() ;

	

	void odigrajMec();
	bool odigran() const {return odigra;}

	friend ostream& operator<<(ostream& it, const Mec& m) {
		it << *m.par;
		if (m.odigran()) {
			cout << "odigran";
			it << *m.parpoena;

			
		}
		else {
			cout << "nije odigran";
		}

		return it;
	}

};




#endif _mec_h_

