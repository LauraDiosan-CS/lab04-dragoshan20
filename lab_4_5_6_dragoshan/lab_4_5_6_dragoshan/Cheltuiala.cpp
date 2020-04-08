#include "Cheltuiala.h"
#include <iostream>
using namespace std;

Cheltuiala::Cheltuiala()
{
	this->nr_apartament = 0;
	this->suma = 0;
	this->tip_c = NULL;
}

Cheltuiala::Cheltuiala(int nr_apartament, int suma, const char* tip_c)
{
	this->nr_apartament = nr_apartament;
	this->suma = suma;
	this->tip_c = new char[strlen(tip_c) + 1];
	strcpy_s(this->tip_c, 1 + strlen(tip_c), tip_c);
}

Cheltuiala::Cheltuiala(const Cheltuiala& c)
{
	this->nr_apartament = c.nr_apartament;
	this->suma = c.suma;
	this->tip_c = new char[strlen(c.tip_c) + 1];
	strcpy_s(this->tip_c, 1 + strlen(c.tip_c), c.tip_c);
}

Cheltuiala::~Cheltuiala()
{
	if (this->tip_c)
	{
		delete[] this->tip_c;
		this->tip_c = NULL;
	}
}

int Cheltuiala::get_nr_apartament()
{
	return this->nr_apartament;
}

int Cheltuiala::get_suma()
{
	return this->suma;
}

char* Cheltuiala::get_tip_c()
{
	return this->tip_c;
}

void Cheltuiala::set_nr_apartament(int nr_apartament)
{
	this->nr_apartament = nr_apartament;
}

void Cheltuiala::set_suma(int suma)
{
	this->suma = suma;
}

void Cheltuiala::set_tip_cheltuiala(const char* tip_c)
{
	if (this->tip_c)
		delete[] this->tip_c;
	this->tip_c = new char[strlen(tip_c) + 1];
	strcpy_s(this->tip_c, strlen(tip_c), tip_c);
}

Cheltuiala& Cheltuiala::operator=(const Cheltuiala& s)
{
	this->nr_apartament = s.nr_apartament;
	this->suma = s.suma;
	this->tip_c = s.tip_c;
	return *this;
}

bool Cheltuiala::operator==(const Cheltuiala& s)
{
	return this->nr_apartament == s.nr_apartament && this->suma == s.suma && strcmp(this->tip_c, s.tip_c) == 0;
}

ostream& operator<<(ostream& os, const Cheltuiala& c)
{
	// TODO: insert return statement here
	os << c.nr_apartament << " " << c.suma << " " << c.tip_c;
	return os;
}
