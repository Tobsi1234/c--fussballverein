#pragma once
#include "CSpieler.h"
using namespace std;

class CTorwart : CSpieler {
private:
	unsigned int strafRaumBeharrschung;
	unsigned int linienQualität;
	unsigned int abwehrKommunikation;

public:
	void print();
	CTorwart(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
};