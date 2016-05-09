// main.cpp

#include "CVerein.h"
#include "CFeldSpieler.h"

int main() {

	/*CPerson * pPersonenListe[maxAnzKader + maxAnzFuehrung];
	for (unsigned int i=0; i<maxAnzKader + maxAnzFuehrung; i++)
		pPersonenListe[i] = 0x0;
	
	unsigned int idx = 0;

	CVerein * vfbStuttgart = new CVerein();
	CKader * vfbKader = new CKader();

	// Aufbau des Kaders

	CTorwart * lehmann = new CTorwart("Lehmann", "Jens", 38, CSpieler::torwart, 1);
	vfbKader->add(*lehmann); pPersonenListe[idx++] = lehmann;

	CTorwart * stolz = new CTorwart("Stolz", "Alexander", 25, CSpieler::torwart, 12);
	vfbKader->add(*stolz); pPersonenListe[idx++] = stolz;

	CTorwart * ulreich = new CTorwart("Ulreich", "Swen", 20, CSpieler::torwart, 24);
	vfbKader->add(*ulreich); pPersonenListe[idx++] = ulreich;

	CFeldSpieler * boka = new CFeldSpieler("Boka", "Arthur", 25, CSpieler::abwehr, 15);
	vfbKader->add(*boka); pPersonenListe[idx++] = boka;

	CFeldSpieler * boulahrouz = new CFeldSpieler("Boulahrouz", "Khalid", 26, CSpieler::abwehr, 4);
	vfbKader->add(*boulahrouz); pPersonenListe[idx++] = boulahrouz;

	CFeldSpieler * delpierre = new CFeldSpieler("Delpierre", "Matthieu", 27, CSpieler::abwehr, 17);
	vfbKader->add(*delpierre); pPersonenListe[idx++] = delpierre;

	CFeldSpieler * magnin = new CFeldSpieler("Magnin", "Ludewic", 29, CSpieler::abwehr, 21);
	vfbKader->add(*magnin); pPersonenListe[idx++] = magnin;

	CFeldSpieler * osorio = new CFeldSpieler("Osorio", "Ricardo", 28, CSpieler::abwehr, 3);
	vfbKader->add(*osorio); pPersonenListe[idx++] = osorio;

	CFeldSpieler * pischorn = new CFeldSpieler("Pischorn", "Marco", 22, CSpieler::abwehr, 42);
	vfbKader->add(*pischorn); pPersonenListe[idx++] = pischorn;

	CFeldSpieler * tasci = new CFeldSpieler("Tasci", "Serdar", 21, CSpieler::abwehr, 5);
	vfbKader->add(*tasci); pPersonenListe[idx++] = tasci;

	CFeldSpieler * bastuerk = new CFeldSpieler("Bastuerk", "Yildiray", 30, CSpieler::mittelfeld, 10);
	vfbKader->add(*bastuerk); pPersonenListe[idx++] = bastuerk;

	CFeldSpieler * elson = new CFeldSpieler("Elson", "", 27, CSpieler::mittelfeld, 25);
	vfbKader->add(*elson); pPersonenListe[idx++] = elson;

	CFeldSpieler * hilbert = new CFeldSpieler("Hilbert", "Roberto", 24, CSpieler::mittelfeld, 19);
	vfbKader->add(*hilbert); pPersonenListe[idx++] = hilbert;

	CFeldSpieler * hitzlsberger = new CFeldSpieler("Hitzlsberger", "Thomas", 26, CSpieler::mittelfeld, 11);
	vfbKader->add(*hitzlsberger); pPersonenListe[idx++] = hitzlsberger;

	CFeldSpieler * khedira = new CFeldSpieler("Khedira", "Sami", 21, CSpieler::mittelfeld, 28);
	vfbKader->add(*khedira); pPersonenListe[idx++] = khedira;

	CFeldSpieler * lanig = new CFeldSpieler("Lanig", "Martin", 24, CSpieler::mittelfeld, 7);
	vfbKader->add(*lanig); pPersonenListe[idx++] = lanig;

	CFeldSpieler * mandjeck = new CFeldSpieler("Mandjeck", "Georgis", 19, CSpieler::mittelfeld, 29);
	vfbKader->add(*mandjeck); pPersonenListe[idx++] = mandjeck;

	CFeldSpieler * pardo = new CFeldSpieler("Pardo", "Pavel", 32, CSpieler::mittelfeld, 13);
	vfbKader->add(*pardo); pPersonenListe[idx++] = pardo;

	CFeldSpieler * rudy = new CFeldSpieler("Rudy", "Sebastian", 18, CSpieler::mittelfeld, 16);
	vfbKader->add(*rudy); pPersonenListe[idx++] = rudy;

	CFeldSpieler * simak = new CFeldSpieler("Simak", "Jan", 30, CSpieler::mittelfeld, 8);
	vfbKader->add(*simak); pPersonenListe[idx++] = simak;

	CFeldSpieler * traesch = new CFeldSpieler("Traesch", "Christian", 21, CSpieler::mittelfeld, 35);
	vfbKader->add(*traesch); pPersonenListe[idx++] = traesch;
	
	CFeldSpieler * cacau = new CFeldSpieler("Cacau", "", 27, CSpieler::sturm, 18);
	vfbKader->add(*cacau); pPersonenListe[idx++] = cacau;

	CFeldSpieler * fischer = new CFeldSpieler("Fischer", "Manuel", 19, CSpieler::sturm, 23);
	vfbKader->add(*fischer); pPersonenListe[idx++] = fischer;

	CFeldSpieler * gomez = new CFeldSpieler("Gomez", "Mario", 23, CSpieler::sturm, 33);
	vfbKader->add(*gomez); pPersonenListe[idx++] = gomez;

	CFeldSpieler * ljuboja = new CFeldSpieler("Ljuboja", "Danijel", 30, CSpieler::sturm, 38);
	vfbKader->add(*ljuboja); pPersonenListe[idx++] = ljuboja;

	CFeldSpieler * marica = new CFeldSpieler("Marica", "Ciprian", 23, CSpieler::sturm, 9);
	vfbKader->add(*marica); pPersonenListe[idx++] = marica;

	CTrainer * veh = new CTrainer("Veh", "Armin", 47);
	vfbKader->add(*veh); pPersonenListe[idx++] = veh;

	// Aufbau des Vereins

	vfbStuttgart->add(*vfbKader);

	CFuehrung * staudt = new CFuehrung("Staudt", "Erwin", 60, CFuehrung::praesident);
	vfbStuttgart->add(*staudt);  pPersonenListe[idx++] = staudt;

	CFuehrung * ruf = new CFuehrung("Ruf", "Ulrich", 52, CFuehrung::vorstand);
	vfbStuttgart->add(*ruf);  pPersonenListe[idx++] = ruf;

	CFuehrung * heldt = new CFuehrung("Heldt", "Horst", 38, CFuehrung::sportdirektor);
	vfbStuttgart->add(*heldt);  pPersonenListe[idx++] = heldt;

	// Ausgabe des Vereins

	vfbStuttgart->print();

	//system("pause");

	// Abbau des allokierten Speichers

	for (int i=0; i<maxAnzFuehrung + maxAnzKader; i++)
		if (pPersonenListe[i] != 0x0)
			delete pPersonenListe[i];

	delete vfbKader;
	delete vfbStuttgart;
	*/
	CFuehrung* fuehrung = new CFuehrung("RobinDutt", "d", 3, CFuehrung::sportdirektor);
	CVerein* verein = new CVerein();
	//fuehrung->print();
	verein->add(*fuehrung);
	verein->print();
	

	return 0;
}
