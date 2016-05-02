#pragma once
#include "CPerson.h"
using namespace std;

class CTrainer : CPerson {

private:
	unsigned int lizenzstufe;

public:
	void print();
	CTrainer(string name, string vorname, unsigned int alter);
};
