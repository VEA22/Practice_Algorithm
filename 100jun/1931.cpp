/*
	1931. ȸ�ǽ� ����
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
	if (a.end == b.end) { //�� ȸ���� ����ð��� ���� ��
		return a.start < b.start;	//���۽ð��� ������ ��ȯ
	}

	else { //����ð��� �ٸ� ��
		return a.end < b.end; //���� �ð��� ������ ��ȯ
	}
}

int main() {
	int n;
	cin >> n;

	vector<Meeting> t(n);

	for (int i = 0; i < n; i++) {
		cin >> t[i].start >> t[i].end;
	}

	//����
	sort(t.begin(), t.end(), compare);

	int endP = 0; //���� �ֱ� ȸ���� ���� �ð�
	int cnt = 0; //����� ȸ���� ��

	for (int i = 0; i < n; i++) {
		if (endP <= t[i].start) { //�ش� ȸ���� ���۽ð��� ���� �ֱ� ȸ���� ���� �ð� �����̴�.
			endP = t[i].end; //���� �ð� ����
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}