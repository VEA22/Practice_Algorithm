/*
	1946. ���Ի��
	#Greedy
*/

#include <iostream>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	int t; //�׽�Ʈ ���̽��� ��
	int n; //�������� ��
	int* rank; //�� ���� ���� ����(index = ����, data = ����)

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		int cnt = 1;
		rank = new int[n+1]; //0��° �ε����� ������� ���� ���̹Ƿ�, n+1 ��ŭ �迭�� ����

		for (int j = 0; j < n; j++) {
			int temp, temp2;
			cin >> temp >> temp2;

			rank[temp] = temp2; //���� rank�� �ε����� ���� rank���� �Է�
		}

		int meetCut = rank[1]; //���� ���� ���
		for (int j = 2; j <= n; j++) {
			if (meetCut >= rank[j]) { //���� ��� (�ڱ⺸�� ���� ������ ���� ���)���� ���� ������ ���� ���
				meetCut = rank[j]; //���� ���� ��� ����
				cnt++; //�հ� ������ ++
			}
		}

		cout << cnt << '\n';

		delete[] rank;
	}

	return 0;
}
