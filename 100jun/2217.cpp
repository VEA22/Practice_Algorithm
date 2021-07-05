/*
	2217. ����
	#Greedy

	Key Point!
	�ƹ��� ���� ������ ���ķ� ������Ѽ� �߷��� �����ٰ� �ص� 
	�ᱹ���� �ִ� �߷��� ���� ���� ������ �� �� �ִ� �߷���ŭ�� �ִ��̴�.
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(int a, int b) {
	return a < b;
}

int main() {
	int n;
	vector<int> v1; //�Էµ� ������ �߷�
	vector<int> v2; //�� ���� �� �ִ� �߷�

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		
		cin >> temp;
		v1.push_back(temp);
	}

	//�������� ����
	sort(v1.begin(), v1.end(), compare);

	//�� ������ ���Խ����� �� �� �� �ִ� �ִ� �߷� ���� �����Ͽ� v2�� �߰�
	for (int i = 0; i < v1.size(); i++) {
		v2.push_back(v1[i] * (n - i));
	}

	//�������� ����
	sort(v2.begin(), v2.end(), compare);

	//v2�� ������ �� (�ִ� �߷� ��) ���
	cout << v2.back();
	return 0;
}