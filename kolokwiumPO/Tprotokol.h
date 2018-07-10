#ifndef TPROTOKOL_H
#define TPROTOKOL_H
#include <iostream>
using namespace std;
#include <string>
#include "Twykladowca.h"
#include "Toceny.h"

struct Tdata
{
	int dzien,miesiac,rok;
};
class Tprotokol
{
	public:
		Tprotokol();
		Tprotokol(string przedmiot,Twykladowca *wyk,int dz,int m, int r); //niektore dane wprowadzam przez parametry a reszte przez metode wczytaj
		void wczytaj();
		void wyswietl();
		
	private:
		Tdata data; //obiekt typu struktury Tdata 
		int n; //ilosc studentow w grupie - rozmiar tablicy
		Twykladowca *wykladowca; //asocjacja, wskaznik do obiektu 
		Toceny *oceny; // agregacja - to bedzie tablica obiektow typu Toceny
		string przedmiot;
};

#endif
