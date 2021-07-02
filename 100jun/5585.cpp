/*
	5585. °Å½º¸§µ·
	#Greedy
*/

#include <iostream>

using namespace std;

int main() {
	int input;
	int cnt = 0;
	int coin[6] = { 500, 100, 50, 10, 5, 1 };
	int coinI = 0;

	cin >> input;

	input = 1000 - input;

	while (input > 0) {
		if (input >= coin[coinI]) {
			cnt += input / coin[coinI];
			input = input % coin[coinI];
		}

		coinI++;
	}

	cout << cnt;

	return 0;
}