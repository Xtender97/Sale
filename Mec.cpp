#include "Mec.h"



Par<int>* Mec::dohvatiParPoena() 
{
	if (!odigran()) throw GreskaMec();
	return &parpoena;
}



void Mec::odigrajMec()
{
	int a = this->dohvatiPar()->dohvatiPrvi()->dohvatiVrednostTima();
	int b = this->dohvatiPar()->dohvatiDrugi()->dohvatiVrednostTima();
	odigra = true;

	/*if (a > b) {
		ishod = POBEDA_DOMACIN;
		parpoena.postaviPrvi(3);
		parpoena.postaviDrugi(0);

		for (int i = 0; i < par->dohvatiPrvi()->dohvatiBroj(); i++) {
			if (par->dohvatiPrvi() != nullptr) {
				(*par->dohvatiPrvi())[i].povecajVrednost(10);
			}
		}

		for (int i = 0; i < par->dohvatiDrugi()->dohvatiBroj(); i++)
			if (par->dohvatiDrugi() != nullptr) {
				(*par->dohvatiDrugi())[i].smanjiVrednost(10);
			}


	}
	else if (a < b) {
		ishod = POBEDA_GOST;
		parpoena.postaviDrugi(3);
		parpoena.postaviPrvi(0);

		for (int i = 0; i < par->dohvatiPrvi()->dohvatiBroj(); i++) {
			if (par->dohvatiPrvi() != nullptr) {
				(*par->dohvatiPrvi())[i].smanjiVrednost(10);
			}
		}

		for (int i = 0; i < par->dohvatiDrugi()->dohvatiBroj(); i++)
			if (par->dohvatiDrugi() != nullptr) {
				(*par->dohvatiDrugi())[i].povecajVrednost(10);
			}
	}
	else {
		ishod = NERESENO;
		parpoena.postaviPrvi(1);
		parpoena.postaviDrugi(1);
	}*/
}