#include "Igrac.h"

void Igrac::povecajVrednost(int proc)
{
	vrednost += (proc / 100 * vrednost);
}

void Igrac::smanjiVrednost(int proc)
{
	vrednost -= (proc / 100 * vrednost);
}
