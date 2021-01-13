#ifndef _tim_h_
#define _tim_h_


#include"Igrac.h"

class Tim {
protected:
	string naziv;
	int kap, broj;
	Igrac **igraci;



public:
	 Tim(string ime, int max):naziv(ime){
		igraci = new Igrac*[kap = max];
		for (int i = 0; i < kap; i++) {
			igraci[i] = nullptr;
		}
		broj = 0;
	
	}

	 virtual ~Tim(){}//												destruktor	

	void prikljuciIgraca( Igrac* igrac, int pozicija);
	int dohvatiBroj() const { return this->broj; };//
	int dohvatiVrednostTima() const;//
	double dohvatiSrVrednost() const ;//

	Igrac& operator[](int i) {
		return *igraci[i];
	}

	const Igrac& operator[](int i) const {
		return *igraci[i];
	}

	friend bool operator==(const Tim& t1, const Tim& t2) {
		
		if (t1.naziv == t2.naziv && t1.kap == t2.kap) {
			for (int i = 0; i < t1.kap; i++) {
				if (t1[i] == t2[i]) ; else return false;
			}
			return true;
		}
		return false;
	}
	friend ostream& operator<<(ostream& it, const Tim& tim) {
		it << tim.naziv << "[";
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


#endif _tim_h_