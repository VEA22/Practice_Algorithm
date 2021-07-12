/*
	4796. д╥гн
	#Greedy
*/

#include <iostream>
using namespace std;

int main() {
	int i = 1;
	while (true) {
		int l, p, v;
		int camp;


		cin >> l >> p >> v;

		if (l == 0 && p == 0 && v == 0)
			break;

		camp = l * (v / p);

		if (v % p < l)
			camp += v % p;

		else
			camp += l;

		cout << "Case " << i++ << ": " << camp << "\n";
	}

	return 0;
}