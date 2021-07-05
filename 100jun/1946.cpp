/*
	1946. 신입사원
	#Greedy
*/

#include <iostream>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	int t; //테스트 케이스의 수
	int n; //지원자의 수
	int* rank; //각 점수 순위 저장(index = 서류, data = 면접)

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		int cnt = 1;
		rank = new int[n+1]; //0번째 인덱스는 사용하지 않을 것이므로, n+1 만큼 배열을 선언

		for (int j = 0; j < n; j++) {
			int temp, temp2;
			cin >> temp >> temp2;

			rank[temp] = temp2; //서류 rank의 인덱스에 면접 rank값을 입력
		}

		int meetCut = rank[1]; //기준 면접 등수
		for (int j = 2; j <= n; j++) {
			if (meetCut >= rank[j]) { //이전 사람 (자기보다 서류 점수가 높은 사람)보다 면접 점수가 높은 사람
				meetCut = rank[j]; //기준 면접 등수 갱신
				cnt++; //합격 가능자 ++
			}
		}

		cout << cnt << '\n';

		delete[] rank;
	}

	return 0;
}
