/*
	11047. µ¿Àü 0
	#Greedy
*/

#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	int* coin = new int[n];
	int coinNum = 0;
	
	for (int i = 0; i < n; i++) {
		cin >> coin[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		if (k >= coin[i]) {
			coinNum += k / coin[i];
			k %= coin[i];
		}
	}

	cout << coinNum << endl;

	return 0;
}