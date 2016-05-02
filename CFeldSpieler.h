#pragma once
#include "CSpieler.h"
using namespace std;

class CFeldSpieler : public CSpieler {
private:
	enum e_starkerFuss {
		unKnown, links, rechts, gleich
	};
	unsigned int verteidigung;
	unsigned int ballBeherrschung;
	unsigned int schussKraft;
	unsigned int schussGenauigkeit;

public:
	void print();
	CFeldSpieler(string name, string vorname, unsigned int alter, e_position position, unsigned int nummer);
};