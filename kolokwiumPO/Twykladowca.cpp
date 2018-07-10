#include "Twykladowca.h"

Twykladowca::Twykladowca()
{
}

Twykladowca::Twykladowca(string imie,string nazwisko)
{
	this->imie=imie;
	this->nazwisko=nazwisko;
}

void Twykladowca::wyswietl()
{
	cout<<imie<<" "<<nazwisko<<endl;  //musi byc metoda wyswietl, abym mogla jego imie i nazwisko wyswietlic na protokole
}
