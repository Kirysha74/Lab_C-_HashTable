#include <cmath>
#include <iostream>
#include <random>
#include <hashtable.h>

using namespace hashtable;

int main() {
	HashTable a(10);
	cout << a.hash_function(5);
	return 1;
}