/*
	2839. 설탕 배달
	#Greedy
*/
#include <iostream>
using namespace std;

int main() {
	int n; //배달해야될 설탕의 양
	int bag = 0;

	cin >> n;

	while (n >= 0) {
		//만약 남은 설탕을 5kg 봉지로 나눌 수 있을 때
		if (n % 5 == 0) {
			bag += n / 5;
			cout << bag << endl;
			return 0;
		}

		//3kg 봉지로 하나 뺌
		n -= 3;
		bag++;
	}
	
	//while 문이 끝난 경우 3kg와 5kg의 조합으로 설탕 분배가 불가능
	cout << -1 << endl;

	return 0;
}