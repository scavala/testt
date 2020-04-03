#pragma once
#include <string>

using namespace std;
class Osoba
{
public:
	Osoba(string ime, string prezime);
	Osoba(string ime, string prezime, int god_rod, double visina, double tezina);
	void set_god(int god_rod);
	void set_visina(double visina);
	void set_tezina(double tezina);
	string get_ime();
	string get_prezime();
	int get_god();
	double get_visina();
	double get_tezina();
	string ispis();
private:
	string ime;
	string prezime;
	int god_rod;
	double visina;
	double tezina;
};

