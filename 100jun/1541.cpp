/*
	1541. �Ҿ���� ��ȣ
	#Greedy

	*Key Point! -�� ������ ���ķδ� -�ڿ� ��ȣ�� �ݾ��ָ� �ּҰ��� �ǹǷ�, -�� ó�� ������ ������ ��� ���ڸ� �������ָ� �ȴ�!
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string input; //�ԷµǴ� ����
	string temp; //���� �ӽ� ����

	int result = 0; //��� ��� ��
	bool minus = false; //-��ȣ�� �����ߴ��� Ȯ��

	cin >> input;

	for (int i = 0; i <= input.size(); i++) {
		//�������� ��
		if (input[i] == '+' || input[i] == '-' || input[i] == '\0') {
			//������ �̹� -�����ڰ� �������� ��
			if (minus)
				result -= stoi(temp);

			//���� -�����ڰ� �������� �ʾ��� ��
			else
				result += stoi(temp);

			//- �����ڰ� �̹��� ������ ���
			if (input[i] == '-')
				minus = true;

			//temp �ʱ�ȭ
			temp = "";
		}

		//�ǿ������� ��
		else {
			temp += input[i]; //temp�� �ӽ� ����
		}
	}

	cout << result;

	return 0;
}