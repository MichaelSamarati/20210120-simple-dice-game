#include "Wuerfel.h"

Wuerfel::Wuerfel()
{

}
void Wuerfel::werfen()
{
	srand(time(NULL));
	augen = rand() % 6 + 1;
}

int Wuerfel::getAugen()
{
	return augen;
}

