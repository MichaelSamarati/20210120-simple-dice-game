#include "Konto.h"

Konto::Konto()
{
	stand = 100;
}

void Konto::einzahlen(int zahl)
{
	stand += zahl;
}

void Konto::auszahlen(int zahl)
{
	stand -= zahl;
}

int Konto::getStand()
{
	return stand;
}


