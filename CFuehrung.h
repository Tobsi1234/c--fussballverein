#pragma once
#include "CPerson.h"
using namespace std;

class CFuehrung : CPerson {

public:
	enum e_aufgabe { praesident, vorstand, sportdirektor };
	void print();
	CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe);

private:
	e_aufgabe aufgabe;
};
