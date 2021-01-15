//https://www.acmicpc.net/problem/2630

#include <iostream>
using namespace std;

void calSquare(int** arr, int num, int startI, int startJ);

int blue = 0;
int white = 0;

int main() {
	int num;
	cin >> num;

	int** arr;
	arr = new int* [num];

	for (int i = 0; i < num; i++)
		arr[i] = new int[num];

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++)
			cin >> arr[i][j];
	}

	calSquare(arr, num, 0, 0);

	cout << white << '\n';
	cout << blue << '\n';

	return 0;
}

void calSquare(int** arr, int num, int startI, int startJ) {
	int temp = arr[startI][startJ];
	int range = num;

	for (int i = startI; i < startI + range; i++) {
		for (int j = startJ; j < startJ + range; j++) {
			if (arr[i][j] != temp) {
				temp = -1;
				break;
			}
		}

		if (temp == -1)
			break;
	}

	if (temp == 0)
		white++;

	else if (temp == 1)
		blue++;

	else if (temp == -1) {
		calSquare(arr, range / 2, startI, startJ);
		calSquare(arr, range / 2, startI + range / 2, startJ);
		calSquare(arr, range / 2, startI, startJ + range / 2);
		calSquare(arr, range / 2, startI + range / 2, startJ + range / 2);
	}
}