/*
	13305. ������
	#Greedy
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; //������ ����
	vector <int> city; //�� ������ �⸧ ����
	vector<int> distance; //���� ���� �Ÿ�
	
	long long fuel; //�� ������
	int minF; //���� �鸰 ���� �� ���� ������ �⸧ ��

	//Input procedure
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		int temp;

		cin >> temp;
		distance.push_back(temp);	
	}

	for (int i = 0; i < n; i++) {
		int temp;

		cin >> temp;
		city.push_back(temp);
	}

	//ù��° ���ÿ��� �ι�° ���÷� �̵��� ���� ������
	//ù��° ���ÿ��� �⸧�� ���� �ؾ��Ѵ�.
	minF = city[0];
	fuel = city[0] * (long long)distance[0];
	for (int i = 1; i < n-1; i++) {
		//���� ������ ���� ������ �⸧ ���� ���� ���ú��� �θ�
		//�ش� ������ �⸧ ������ �������� ���� ������ ���ð� ���ö����� �Ÿ��� ����Ѵ�.
		if (city[i] < minF) {
			minF = city[i];
		}

		fuel += minF * (long long)distance[i];
	}

	cout << fuel;

	return 0;
}