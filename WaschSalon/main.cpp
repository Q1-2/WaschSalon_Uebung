// WaschSalon.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <exception>

#include "Waschsalon.h"
#include "Geraet.h"
#include "Waschmaschine.h"
#include "Trockner.h"

// Testklasse - Kommentiere Zeilenweise aus und teste Dein Programm.

int main()
{
	Waschsalon* ws1 = new Waschsalon(1); 
	Waschmaschine* w1 = new Waschmaschine;
	Waschmaschine* w2 = new Waschmaschine;
	Waschmaschine* w3 = new Waschmaschine;
	Waschmaschine* w4 = new Waschmaschine;
	Waschmaschine* w5 = new Waschmaschine;
	Waschmaschine* w6 = new Waschmaschine;
	Waschmaschine* w7 = new Waschmaschine;
	Waschmaschine* w8 = new Waschmaschine;
	Waschmaschine* w9 = new Waschmaschine;
	Waschmaschine* w10 = new Waschmaschine;

	Trockner* t1 = new Trockner;
	Trockner* t2 = new Trockner;
	Trockner* t3 = new Trockner;
	Trockner* t4 = new Trockner;
	Trockner* t5 = new Trockner;
	Trockner* t6 = new Trockner;
	Trockner* t7 = new Trockner;
	Trockner* t8 = new Trockner;
	
	ws1->hinzufuegenMeineGeraete(w1);
	ws1->hinzufuegenMeineGeraete(w2); 
	ws1->hinzufuegenMeineGeraete(w3);
	ws1->hinzufuegenMeineGeraete(w4);
	ws1->hinzufuegenMeineGeraete(w5);
	ws1->hinzufuegenMeineGeraete(w6);
	ws1->hinzufuegenMeineGeraete(w7);
	ws1->hinzufuegenMeineGeraete(w8);
	ws1->hinzufuegenMeineGeraete(w9);
	ws1->hinzufuegenMeineGeraete(w10);

	ws1->hinzufuegenMeineGeraete(t1);
	ws1->hinzufuegenMeineGeraete(t2);
	ws1->hinzufuegenMeineGeraete(t3);
	ws1->hinzufuegenMeineGeraete(t4);
	ws1->hinzufuegenMeineGeraete(t5);
	ws1->hinzufuegenMeineGeraete(t6);
	ws1->hinzufuegenMeineGeraete(t7);
	ws1->hinzufuegenMeineGeraete(t8);
	//

	//cout << "Notstopp aller Geraet:" << endl << endl;
	//ws1->starteNotStoppAlleGeraet();

	//cout << endl;

	//cout << "Notstopp aller Trockner:" << endl;
	//ws1->starteNotStoppAlleGeraet(typeid(Trockner).name());

	//t1->starteProgramm(1);

	//cout << "Zeige alle Betriebszustaende" << endl;
	//ws1->zeigeAlleBetriebszustaende();

	//cout << endl;

	cout << "Notstopp aller Waschmaschinen:" << endl;
	ws1->starteNotStoppAlleGeraet(typeid(Waschmaschine).name());



	return 0;
}

