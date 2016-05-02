#pragma once
#include "CPerson.h"
#include <iostream>
using namespace std;

class CSpieler : public CPerson {
	public:
		enum e_position {
			torwart, abwehr, mittelfeld, sturm
		};
		void print() { cout << "Position: " << position << "Nummer: " << nummer << endl; };

	protected:
		e_position position;
		unsigned int nummer;
};