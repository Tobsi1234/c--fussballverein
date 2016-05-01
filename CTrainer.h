#pragma once
#include "CPerson.h"
using namespace std;

class CTrainer : CPerson {

private:
	unsigned int lizenzstufe;

public:
	void print();
	CTrainer();
};
