#include "Spiel.h"

Spiel::Spiel()
{
	k = Konto();
	s = Spielzahl();
	wA = Wuerfel();
	wB = Wuerfel();
	wC = Wuerfel();
}

void Spiel::einsatzZahlen()
{
	k.auszahlen(5);
}

void Spiel::spielzahlSetzen(int zahl)
{
	s.setzen(5);
}

void Spiel::wuerfelWerfen()
{
	wA.werfen();
	wB.werfen();
	wC.werfen();
}

void Spiel::gewinnAuszahlen()
{
	if ((wA.getAugen() + wB.getAugen() + wC.getAugen()) >= s.getZahl()) {
		k.einzahlen(10);
	}
}

void Spiel::getSpielDaten()
{
	std::cout << "Kontostand: " << k.getStand() << " | Letzte Spielzahl: " << s.getZahl() << " | Insgesamte Augenanzahl: " << (wA.getAugen() + wB.getAugen() + wC.getAugen()) << std::endl;
}


