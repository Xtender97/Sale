#include "Tim.h"

void Tim::prikljuciIgraca( Igrac* igrac, int pozicija)
{

	igraci[pozicija] = igrac;
	broj++;
}

int Tim::dohvatiVrednostTima() const
{
	int vr=0;
	for (int i = 0; i < kap; i++) {

		if (igraci[i] == nullptr)continue;
		
			vr += igraci[i]->dohvVrednost();
		
	}
	return vr;
}




double Tim::dohvatiSrVrednost() const
{
	int vr = this->dohvatiVrednostTima();
	double sr = vr / broj;
	return sr;
}
