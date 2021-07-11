#pragma once

class Konto {
private:
	int stand;
public:
	Konto();
	void einzahlen(int zahl);
	void auszahlen(int zahl);
	int getStand();
};


