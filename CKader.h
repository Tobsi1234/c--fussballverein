#pragma once
#include "CPerson.h"
#include "CTorwart.h"
#include "CFeldspieler.h"
#include "CTrainer.h"

const unsigned int maxAnzKader = 50;

class CKader {

private: 
	unsigned int anzKader;
	CPerson* pKaderMitglieder[maxAnzKader];

public:
	CKader();
	bool add(const CPerson & person);
	void print();
};
