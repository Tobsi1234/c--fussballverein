#pragma once
#include "CPerson.h"
using namespace std;

class CTrainer : public CPerson {

private:
	unsigned int lizenzstufe;

public:
	void print();
	CTrainer(string name, string vorname, unsigned int alter);
};
