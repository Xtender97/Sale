#include "Igrac.h"

void Igrac::povecajVrednost(float proc)
{
	vrednost += (proc / 100 * vrednost);
}

void Igrac::smanjiVrednost(float proc)
{
	vrednost -= (proc / 100 * vrednost);
}
