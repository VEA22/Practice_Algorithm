/*
	10162. 전자레인지
	#Greedy
*/

#include <iostream>
using namespace std;

int main() {
	int button[3] = { 300, 60, 10 }; //버튼 A, B, C
	int time;

	//각 버튼의 누른 횟수
	int cntA = 0;
	int cntB = 0;
	int cntC = 0;

	cin >> time;

	//만약에 버튼 세개의 조합으로 해당 시간을 맞출 수 없으면 -1 출력 이후 종료
	if (time % button[2] != 0) {
		cout << -1;
		return 0;
	}


	while (time >= button[2]) {
		
		//버튼 A를 누를 수 있을 때
		if (time >= button[0]) {
			cntA += time / button[0];
			time = time % button[0];
		}

		//버튼 B를 누를 수 있을 때
		else if (time >= button[1]) {
			cntB += time / button[1];
			time = time % button[1];
		}

		//버튼 C를 누를 수 있을 때
		else if (time >= button[2]) {
			cntC += time / button[2];
			time = time % button[2];
		}
	}

	//출력
	cout << cntA << " " << cntB << " " << cntC;

	return 0;
}