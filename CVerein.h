#pragma once
#include "CKader.h" 
#include "CFuehrung.h"

const unsigned int maxAnzFuehrung = 20;

class CVerein {

private:
	CKader* pMyKader;
	unsigned int anzFuehrung;
	CFuehrung* fuehrungMitglieder[maxAnzFuehrung];

public:
	bool add(const CFuehrung &);
	bool add(const CKader &);
	void print();
};