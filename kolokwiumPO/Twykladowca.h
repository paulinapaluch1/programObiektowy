#ifndef TWYKLADOWCA_H
#define TWYKLADOWCA_H
#include <iostream>
using namespace std;
#include <string>

class Twykladowca
{
	public:
		Twykladowca();
		Twykladowca(string imie,string nazwisko); //dane wykladowcy wprowadzam przez konstruktor z parametrami
		void wyswietl();
	private:
		string imie,nazwisko;
};

#endif
