#include "Privilegovani_tim.h"

void Privilegovani_tim::prikljuciIgraca(Igrac* igrac, int pozicija)
{
	
	if (igrac->dohvVrednost() < minimalnaVrednost) throw Greska();
	igraci[pozicija] = igrac;
	broj++;
}
