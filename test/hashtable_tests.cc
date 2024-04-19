#include <hashtable.h>

using namespace hashtable;

int main() {
	srand(173);

	HashTable a;

	for (int i = 1; i < 10; ++i) {
		a.insert_value(rand());
	}

	HashTable b(a);

	HashTable c = b;

	cout << "Hash Table A" << endl;

	a.print();

	cout << "Hash Table B" << endl;

	b.print();

	cout << "Hash Table C" << endl;
	 
	c.print();

	cout << " --- " << c.contains(2993) << endl;

	cout << " --- " << c.count(3) << endl;

	cout << " --- " << c.erase(32185) << endl;

	c.print();



	cout << task();

	return 1;
}