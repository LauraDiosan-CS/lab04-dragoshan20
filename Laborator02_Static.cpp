#include "Utilities.h"
#include <iostream>

using namespace std;


void readStaticArray(int& n, int v[])
{
	cout << "Give lenght= ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "v[" << i << "]=";
		cin >> v[i];

	}
}

void afisare(int n, int v[])
{
	for (int i = 1; i <= n; i++)
	{
		cout << v[i] << " ";
	}
}


int prime(int nr)
{
	if (nr < 2)
		return 0;
	if (nr == 2)
		return 1;
	for (int i = 2; i < nr; i++)
	{
		if (nr % i == 0)
			return 0;
	}
	return 1;
}

void determineStaticArrayPrime(int n, int v[], int& nr, int& nrmax)
{
	int i, j;
	nr = nrmax = 0;
	cout << "Prime: ";
	for (int i = 0; i < n; i++)
	{
		if (prime(v[i]))
		{
			nr++;
			if (nr > nrmax)
			{
				nrmax = nr;
				j = i;

			}
		}
		else
		{
			nr = 0;
		}

	}
	for (i = j - nrmax + 1; i <= j; i++)
		cout << v[i] << " ";
	cout << endl;
}

void determineStaticArrayDifferent(int n, int v[], int& nr1, int& nrmax1)
{
	int i, j;
	nr1 = nrmax1 = 0;
	cout << "Semne diferite: ";
	for (int i = 0; i < n; i++)
	{
		if ((v[i] > 0 && v[i + 1] < 0) || (v[i] < 0 && v[i + 1] > 0))
		{
			nr1++;
			if (nr1 > nrmax1)
			{
				nrmax1 = nr1;
				j = i;
			}
		}
		else
		{
			nr1 = 0;
		}

	}
	for (i = j - nrmax1 + 1; i <= j; i++)
		cout << v[i] << " ";

}

