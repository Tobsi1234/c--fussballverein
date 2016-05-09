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
	CVerein();
	bool add(const CFuehrung & cf);
	bool add(const CKader & ck);
	void print();
};
