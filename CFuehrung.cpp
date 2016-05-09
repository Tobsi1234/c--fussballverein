#include "CFuehrung.h"
#include <iostream>

CFuehrung::CFuehrung(string name, string vorname, unsigned int alter, e_aufgabe aufgabe)
{
	this->name = name;
}

void CFuehrung::print() {
	cout << this->name;
	/*cout << "Hay";
	string str = this->name;
	cout << str;*/
}
