#ifndef TOCENY_H
#define TOCENY_H
#include <iostream>
using namespace std;
#include <string>

class Toceny
{
	public:
		Toceny();
		//Toceny(string imie,string nazwisko,float ocena);
		void wczytaj();
		void wyswietl();
	private:
		string imie,nazwisko; //kazdy obiekt klasy Toceny bedzie przechowywal dane na temat 1 studenta,zrobimy z nich tabelê - agregacja
		float ocena;
		
};

#endif
