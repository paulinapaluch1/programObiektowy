#include "Tprotokol.h"
#include <iomanip>

Tprotokol::Tprotokol()
{
}

Tprotokol::Tprotokol(string przedmiot,Twykladowca *wyk, int dz,int m, int r)
{
	this->przedmiot=przedmiot; //taka sama nazwa, wiec uzywam wskaznika this
	wykladowca=wyk; //inna nazwa, wiec moge normalnie przypisac
	data.dzien=dz;
	data.miesiac=m;
	data.rok=r;
	
}

void Tprotokol::wczytaj()
{
	cout<<"Podaj dane potrzebne do sporzadzenia protokolu z przedmiotu "<<przedmiot<<endl;
	cout<<"Ile osob jest w grupie? "<<endl;
	cin>>n;
	oceny=new Toceny[n]; //tworze tablice dynamiczna
	
	for(int i=0;i<n;i++)
	{
		oceny[i].wczytaj(); 

		
	}
	cout<<endl;
}

void Tprotokol::wyswietl()
{
	cout<<setw(30)<<right<<data.dzien<<"."<<data.miesiac<<"."<<data.rok<<"r"<<endl;  //data bedzie w prawym gornym rogu
	cout<<"PROTOKOL Z PRZEDMIOTU: "<<przedmiot<<endl;
	cout<<"WYKLADOWCA: ";
	wykladowca->wyswietl(); 
	cout<<endl<<endl;
	
		cout<<setw(10)<<right<<"IMIE"<<setw(10)<<right<<"NAZWISKO"<<setw(7)<<right<<"OCENA"<<endl; //naglowek tabelki
		for(int i=0;i<n;i++)
		{
			oceny[i].wyswietl();
			cout<<endl;
		}
	
	
}
