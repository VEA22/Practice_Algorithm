/*
	1339. �ܾ� ����
	#Greedy
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool compareS(string a, string b) {
	return a.length() > b.length();
}

bool compareD(int a, int b) {
	return a > b;
}

int main() {
	int n; //������ ����
	cin >> n;

	int index[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
	int alphabet[26] = { 0, };
	int answer = 0;

	string* word = new string[n]; //�� �ܾ�

	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}


	//���� ������ ����(������ ��)
	sort(word, word + n, compareS);
	
	for (int i = 0; i < n; i++) {
		int k = 0;
		for (int j = word[i].length() - 1; j >= 0; j--) {


			//���ĺ� �迭�� �ش� �ڸ��� +
			alphabet[word[i][j] - 'A'] += index[k++];
		}
	}

	int num = 9; //���ĺ��� ������ �� ����

	//�ش� ���ĺ��� �����ϴ� �ڸ����� �������� �������� ����
	sort(alphabet, alphabet + 26, compareD);

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == 0)
			break;

		answer += alphabet[i] * num--;
	}

	cout << answer;
	
	return 0;
}
