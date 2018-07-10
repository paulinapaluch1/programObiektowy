#include <iostream>
#include "Toceny.h"
#include "Tprotokol.h"
#include "Twykladowca.h"

using namespace std;
/* Autor: Paulina Paluch
Kolokwium 1 z Programowania Obiektowego
Program ma za zadanie wyswietlic 2 protokoly dla 1 wykladowcy, ktore maja zawierac oceny z egzaminu grupy studentow
z jakiegos przedmiotu. Uzywamy 3 klas: Tprotokol,Toceny i Twykladowca. W protokole ma byc data, imie i nazwisko wykladowcy, 
nazwa przedmiotu, imiona,nazwiska i oceny studentow (max 20). Trzeba zastosowac hermetyzacje, powiaqzac odpowiednio klasy itp.   */

int main(int argc, char** argv) 
{
	
	
	Twykladowca wykladowca("Jan","Kowalski");
	
	Tprotokol protokol("Programowanie",&wykladowca,12,10,2017);
	protokol.wczytaj();
	protokol.wyswietl();
	
	Tprotokol protokol2("Informatyka",&wykladowca,14,11,2017);
	protokol2.wczytaj();
	protokol2.wyswietl();
	
	return 0;
}
