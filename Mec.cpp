#include "Mec.h"



Par<int>* Mec::dohvatiParPoena() 
{
	if (!odigran()) throw GreskaMec();
	return parpoena;
}



void Mec::odigrajMec()
{
	int a = this->dohvatiPar()->dohvatiPrvi()->dohvatiVrednostTima();
	int b = this->dohvatiPar()->dohvatiDrugi()->dohvatiVrednostTima();
	odigra = true;

	if (a > b) {
		cout << "Prvi jaci" << endl;
		ishod = POBEDA_DOMACIN;
		parpoena->postaviPrvi(3);
		parpoena->postaviDrugi(0);

		for (int i = 0; i < par->dohvatiPrvi()->getKapacitet(); i++) {
			if (par->dohvatiPrvi() != nullptr && par->dohvatiPrvi()->hasPlayerOnPosiotion(i)) {
				(*par->dohvatiPrvi())[i].povecajVrednost(10);
			}
		}

		for (int i = 0; i < par->dohvatiDrugi()->getKapacitet(); i++)
			if (par->dohvatiDrugi() != nullptr && par->dohvatiPrvi()->hasPlayerOnPosiotion(i)) {
				(*par->dohvatiDrugi())[i].smanjiVrednost(10);
			}


	}
	else if (a < b) {

		ishod = POBEDA_GOST;
		parpoena->postaviDrugi(3);
		parpoena->postaviPrvi(0);


		for (int i = 0; i < par->dohvatiPrvi()->getKapacitet(); i++) {
			if (par->dohvatiPrvi() != nullptr && par->dohvatiPrvi()->hasPlayerOnPosiotion(i)) {	
				(*par->dohvatiPrvi())[i].smanjiVrednost(10);		
			}
		}

		for (int i = 0; i < par->dohvatiDrugi()->getKapacitet(); i++) {
			if (par->dohvatiDrugi() != nullptr  && par->dohvatiDrugi()->hasPlayerOnPosiotion(i)) {
				(*par->dohvatiDrugi())[i].povecajVrednost(10);
			}
		}

	}
	else {
		ishod = NERESENO;
		parpoena->postaviPrvi(1);
		parpoena->postaviDrugi(1);
	}
}