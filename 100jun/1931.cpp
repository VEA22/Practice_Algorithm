/*
	1931. 회의실 배정
	#Greedy
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Meeting {
	int start;
	int end;
};

bool compare(Meeting a, Meeting b) {
	if (a.end == b.end) { //두 회의의 종료시간이 같을 때
		return a.start < b.start;	//시작시간이 빠른걸 반환
	}

	else { //종료시간이 다를 때
		return a.end < b.end; //종료 시간이 빠른걸 반환
	}
}

int main() {
	int n;
	cin >> n;

	vector<Meeting> t(n);

	for (int i = 0; i < n; i++) {
		cin >> t[i].start >> t[i].end;
	}

	//정렬
	sort(t.begin(), t.end(), compare);

	int endP = 0; //가장 최근 회의의 종료 시간
	int cnt = 0; //진행된 회의의 수

	for (int i = 0; i < n; i++) {
		if (endP <= t[i].start) { //해당 회의의 시작시간이 가장 최근 회의의 종료 시간 이후이다.
			endP = t[i].end; //종료 시간 갱신
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}