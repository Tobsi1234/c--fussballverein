#pragma once
#include "CSpieler.h"
using namespace std;

class CTorwart : public CSpieler {
private:
	unsigned int strafRaumBeharrschung;
	unsigned int linienQualitaet;
	unsigned int abwehrKommunikation;

public:
	void print();
	CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
};
