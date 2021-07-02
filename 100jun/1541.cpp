/*
	1541. 잃어버린 괄호
	#Greedy

	*Key Point! -가 등장한 이후로는 -뒤에 괄호를 닫아주면 최소값이 되므로, -가 처음 등장한 이후의 모든 숫자를 뺄셈해주면 된다!
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string input; //입력되는 수식
	string temp; //숫자 임시 저장

	int result = 0; //계산 결과 값
	bool minus = false; //-기호가 등장했는지 확인

	cin >> input;

	for (int i = 0; i <= input.size(); i++) {
		//연산자일 때
		if (input[i] == '+' || input[i] == '-' || input[i] == '\0') {
			//이전에 이미 -연산자가 등장했을 때
			if (minus)
				result -= stoi(temp);

			//아직 -연산자가 등장하지 않았을 때
			else
				result += stoi(temp);

			//- 연산자가 이번에 등장한 경우
			if (input[i] == '-')
				minus = true;

			//temp 초기화
			temp = "";
		}

		//피연산자일 때
		else {
			temp += input[i]; //temp에 임시 저장
		}
	}

	cout << result;

	return 0;
}