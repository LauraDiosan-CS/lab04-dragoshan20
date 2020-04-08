#pragma once
#include <iostream>
using namespace std;
class Cheltuiala
{

private:
	int nr_apartament;
	int suma;
	char* tip_c;

public:
	Cheltuiala();
	Cheltuiala(int nr_apartament, int suma, const char* tip_c);
	Cheltuiala(const Cheltuiala& s);
	~Cheltuiala();
	int get_nr_apartament();
	int get_suma();
	char* get_tip_c();
	void set_nr_apartament(int nr_apartament);
	void set_suma(int suma);
	void set_tip_cheltuiala(const char* tip_c);
	Cheltuiala& operator=(const Cheltuiala& s);
	bool operator==(const Cheltuiala& s);
	friend ostream& operator<<(ostream& os, const Cheltuiala& c);
};

