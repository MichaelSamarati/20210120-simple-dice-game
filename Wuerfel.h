#pragma once

#include <time.h>
#include <random>

class Wuerfel {
private:
	int augen;
public:
	Wuerfel();
	void werfen();
	int getAugen();
};