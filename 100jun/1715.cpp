/*
	1715. ī�� �����ϱ�
	#Greedy, �켱���� ť
*/

#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	int sum = 0; //�� �� Ƚ��
	int n; //�� ī���� ��
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		pq.push(temp);
	}

	while (pq.size() > 1) {
		int a = pq.top();
		pq.pop();
		a += pq.top();
		pq.pop();
		sum += a;
		pq.push(a);
	}

	cout << sum;


	return 0;
}