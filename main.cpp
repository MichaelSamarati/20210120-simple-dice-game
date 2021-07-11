#include "Spiel.h"

int main() {
	Spiel spiel = Spiel();
	spiel.einsatzZahlen();
	spiel.spielzahlSetzen(18);
	spiel.wuerfelWerfen();
	spiel.getSpielDaten();

	return 0;
}
