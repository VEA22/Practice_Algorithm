/*
	11399. ATM
	#Greedy
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;

	int* p = new int[n];
	int sum;

	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}

	sort(p, p+n);

	sum = p[0];
	for (int i = 1; i < n; i++) {
		p[i] = p[i] + p[i - 1];

		sum += p[i];
	}

	cout << sum;
	
	return 0;
}