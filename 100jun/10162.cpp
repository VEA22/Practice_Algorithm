/*
	10162. ���ڷ�����
	#Greedy
*/

#include <iostream>
using namespace std;

int main() {
	int button[3] = { 300, 60, 10 }; //��ư A, B, C
	int time;

	//�� ��ư�� ���� Ƚ��
	int cntA = 0;
	int cntB = 0;
	int cntC = 0;

	cin >> time;

	//���࿡ ��ư ������ �������� �ش� �ð��� ���� �� ������ -1 ��� ���� ����
	if (time % button[2] != 0) {
		cout << -1;
		return 0;
	}


	while (time >= button[2]) {
		
		//��ư A�� ���� �� ���� ��
		if (time >= button[0]) {
			cntA += time / button[0];
			time = time % button[0];
		}

		//��ư B�� ���� �� ���� ��
		else if (time >= button[1]) {
			cntB += time / button[1];
			time = time % button[1];
		}

		//��ư C�� ���� �� ���� ��
		else if (time >= button[2]) {
			cntC += time / button[2];
			time = time % button[2];
		}
	}

	//���
	cout << cntA << " " << cntB << " " << cntC;

	return 0;
}