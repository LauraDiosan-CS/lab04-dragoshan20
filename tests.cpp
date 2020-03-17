#include <iostream>

#include "Utilities.h"

#include <assert.h>

using namespace std;

void MyTests()
{
	assert(prime(2) == 1);
	assert(prime(1) == 0);
	assert(prime(-19) == 0);
}