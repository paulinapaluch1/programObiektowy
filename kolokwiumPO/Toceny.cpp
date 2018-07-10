#include "Toceny.h"
#include <iomanip>
Toceny::Toceny()
{
}

/*Toceny::Toceny(string imie,string nazwisko,float ocena)
{
	this->imie=imie;
	this->nazwisko=nazwisko;
	this->ocena=ocena;
	
}
*/

void Toceny::wczytaj()
{
	cout<<"Podaj imie sttudenta: "<<endl;
	cin>>imie;
	cout<<"Nazwisko: "<<endl;
	cin>>nazwisko;
	cout<<"Ocena:"<<endl;
	cin>>ocena;
}

void Toceny::wyswietl()
{
	cout<<setw(10)<<right<<imie<<setw(10)<<right<<nazwisko<<setw(7)<<right<<ocena<<endl; //wyswietlam w taki sposob zeby dane wszystkich studetnow w protokole
																						//umieszczone zostaly w tabeli,byly rowno wyswietlone
}
