//https://www.acmicpc.net/problem/2798

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int num, max;
	cin >> num >> max;

	int* card = new int[num];
	for (int i = 0; i < num; i++)
		cin >> card[i];

	sort(card, card + num);

	int temp = 0;
	int oneI = 0;
	int twoI = 1;
	int thrI = 2;
	bool outCheck = false;
	for (int oneI = 0; oneI < num - 2; oneI++) {
		for (int twoI = oneI + 1; twoI < num - 1; twoI++) {
			for (thrI = twoI + 1; thrI < num; thrI++) {
				if (card[oneI] + card[twoI] + card[thrI] <= max && card[oneI] + card[twoI] + card[thrI] > temp)
					temp = card[oneI] + card[twoI] + card[thrI];
			}
		}
	}

	cout << temp;

	delete[] card;
	return 0;
}