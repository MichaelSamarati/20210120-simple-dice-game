#pragma once
#include <iostream>

#include "Konto.h"
#include "Spielzahl.h"
#include "Wuerfel.h"

class Spiel {
private:
	Konto k;
	Spielzahl s;
	Wuerfel wA, wB, wC;
public:
	Spiel();
	void einsatzZahlen();
	void spielzahlSetzen(int zahl);
	void wuerfelWerfen();
	void gewinnAuszahlen();
	void getSpielDaten();
};

