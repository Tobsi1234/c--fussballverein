#pragma once
#include <string>
using namespace std;

class CPerson
{

public:
	virtual void print() = 0;
protected:
	string name;
	string vorname;
	unsigned int alter;
};
