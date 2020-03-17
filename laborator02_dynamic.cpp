#include <iostream>
#include "Utilities.h"
using namespace std;

int main()
{
    int n, nr, nr1, nrmax, nrmax1, op;
    int* v = readDynamicArray(n);
    while (true)
    {
        cout << endl;
        cout << "1.Cea mai lunga subsecventa cu nr prime" << endl;
        cout << "2.Cea mai lunga subsecventa cu semne diferite" << endl;
        cout << "3. Exit" << endl;
        cout << "Alegeti optiunea:";
        cin >> op;
        cout << endl;
        if (op == 1) determineDynamicArrayPrime(n, v, nr, nrmax);
        else if (op == 2) determineDynamicArrayDifferent(n, v, nr1, nrmax1);
            else if (op == 3) break;
    }
    delete[]v;
    return 0;
}


   
    
    