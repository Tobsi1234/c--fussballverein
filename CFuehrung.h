#pragma once
#include "CPerson.h"
#include <iostream>
using namespace std;

class CFuehrung : CPerson {

private:
	enum e_aufgabe {praesident, vorstand, sportdirektor};

public:
	void print();
	CFuehrung();
};
