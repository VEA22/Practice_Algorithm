/*
	2839. ���� ���
	#Greedy
*/
#include <iostream>
using namespace std;

int main() {
	int n; //����ؾߵ� ������ ��
	int bag = 0;

	cin >> n;

	while (n >= 0) {
		//���� ���� ������ 5kg ������ ���� �� ���� ��
		if (n % 5 == 0) {
			bag += n / 5;
			cout << bag << endl;
			return 0;
		}

		//3kg ������ �ϳ� ��
		n -= 3;
		bag++;
	}
	
	//while ���� ���� ��� 3kg�� 5kg�� �������� ���� �й谡 �Ұ���
	cout << -1 << endl;

	return 0;
}