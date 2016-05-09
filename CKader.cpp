#include "CKader.h"
#include <iostream>

CKader::CKader()
{
	cout << "Hallo, ich werde initalisiert";
	for (int i = 0; i<maxAnzKader; i++) {
		pKaderMitglieder[i] = 0;
	}
	//CPerson* person = new CTorwart("du", "depp", 10, CSpieler::torwart, 1);
	//pKaderMitglieder[0] = person;
	
}

bool CKader::add(const CPerson & person)
{
	cout << "Add Kader";
	return false;
}

void CKader::print() {
	for (int i = 0; i<maxAnzKader && pKaderMitglieder[i] != 0; i++) {
		pKaderMitglieder[i]->print();
	}
}
