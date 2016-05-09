#include "CVerein.h"


CVerein::CVerein() {
	//cout << "Konstruktor";
	for (int i = 0; i<maxAnzFuehrung; i++) {
		fuehrungMitglieder[i] = 0;
	}
	pMyKader = new CKader();
}
bool CVerein::add(const CFuehrung & cf)
{
	int i = 0;
	for (i = 0; fuehrungMitglieder[i] != 0; i++) {
	}

	CFuehrung help = cf;
	CFuehrung* tmp = &help;
	fuehrungMitglieder[i] = tmp;
	
	return false;
}

bool CVerein::add(const CKader & ck)
{
	CKader help = ck;
	CKader* tmp = &help;
	pMyKader = tmp;
	
	return false;
}

void CVerein::print()
{
	//cout << "Druck";
	//cout << this->fuehrungMitglieder[0]->name;
	/*for (int i = 0; i<maxAnzFuehrung; i++) {
		cout << "Das ";
		cout << i;
		cout << " te Element: ";
		cout << fuehrungMitglieder[i];
		cout << "\n";
	}*/
	cout << "Führung hinzugefügt: ";
	this->fuehrungMitglieder[0]->print();
	cout <<"\nKader hinzugefügt: ";
	//this->pMyKader->print();
	
	//this->fuehrungMitglieder[0]->print();
}

