#pragma once
#include "CPerson.h"
const unsigned int maxAnzKader = 50;

class CKader {

private: 
	unsigned int anzKader;
	CPerson* pKaderMitglieder[maxAnzKader];

public:
	CKader();
	bool add(const CPerson &);
	void print();
};