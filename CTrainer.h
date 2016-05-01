#pragma once
#include "CPerson.h"
#include <iostream>
using namespace std;

class CTrainer : CPerson {

private:
	unsigned int lizenzstufe;

public:
	void print();
	CTrainer();
};
