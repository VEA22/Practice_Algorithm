/*
	1744. 수 묶기
	#Greedy
*/

#include <iostream>
#include <queue>
using namespace std;

int main() {
	int one = 0;
	int zero = 0;
	int n;
	priority_queue<int, vector<int>, greater<int>> postive;
	priority_queue<int> negative;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;

		if (temp < 0)
			negative.push(temp);

		else if (temp == 0)
			zero++;

		else if (temp == 1)
			one++;

		else
			postive.push(temp);
	}

	//양수가 홀수개 있으면, 짝을 만들어 주기 위해 1 추가
	if (postive.size() % 2 == 1)
		postive.push(1);

	//음수가 홀수개 있을 때, 0이 있는 경우 0을 추가 해주고, 없는 경우 1을 추가 해줌
	if (negative.size() % 2 == 1) {
		if (zero == 0)
			negative.push(1);

		else
			negative.push(0);
	}

	int sum = 0;


	//양수들의 덧셈
	while (!postive.empty()) {
		int num1 = postive.top();
		postive.pop();

		int num2 = postive.top();
		postive.pop();

		sum += (num1 * num2);
	}

	//음수들의 덧셈
	while (!negative.empty()) {
		int num1 = negative.top();
		negative.pop();

		int num2 = negative.top();
		negative.pop();

		sum += (num1 * num2);
	}

	sum += one;

	cout << sum;

	return 0;
}