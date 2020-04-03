#include "Osoba.h"
#include <sstream>
Osoba::Osoba(string ime, string prezime)
{
	this->ime = ime;
	this->prezime = prezime;
}

Osoba::Osoba(string ime, string prezime, int god_rod, double visina, double tezina)
{
	this->ime = ime;
	this->prezime = prezime;
	set_god(god_rod);
	set_visina(visina);
	set_tezina(tezina);
}

void Osoba::set_god(int god_rod)
{
	this->god_rod = god_rod;
}

void Osoba::set_visina(double visina)
{
	this->visina = visina;
}

void Osoba::set_tezina(double tezina)
{
	this->tezina = tezina;
}

string Osoba::get_ime()
{
	return ime;
}

string Osoba::get_prezime()
{
	return prezime;
}

int Osoba::get_god()
{
	return god_rod;
}

double Osoba::get_visina()
{
	return visina;
}

double Osoba::get_tezina()
{
	return tezina;
}

string Osoba::ispis()
{
	stringstream ss;
	ss << "Ime: " << ime << " Prezime: " << prezime << " Godina: " << god_rod << " visina: " << visina << " tezina; " << tezina;

	return ss.str();
}
