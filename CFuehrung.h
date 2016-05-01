#pragma once
#include "CPerson.h"
using namespace std;

class CFuehrung : CPerson {

private:
	enum e_aufgabe {praesident, vorstand, sportdirektor};

public:
	void print();
	CFuehrung();
};
