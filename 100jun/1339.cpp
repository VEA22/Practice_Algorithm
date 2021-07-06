/*
	1339. 단어 수학
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
	int n; //글자의 개수
	cin >> n;

	int index[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
	int alphabet[26] = { 0, };
	int answer = 0;

	string* word = new string[n]; //각 단어

	for (int i = 0; i < n; i++) {
		cin >> word[i];
	}


	//길이 순으로 정렬(내림차 순)
	sort(word, word + n, compareS);
	
	for (int i = 0; i < n; i++) {
		int k = 0;
		for (int j = word[i].length() - 1; j >= 0; j--) {


			//알파벳 배열에 해당 자릿수 +
			alphabet[word[i][j] - 'A'] += index[k++];
		}
	}

	int num = 9; //알파벳에 매핑해 줄 숫자

	//해당 알파벳이 차리하는 자릿수를 기준으로 내림차순 정렬
	sort(alphabet, alphabet + 26, compareD);

	for (int i = 0; i < 26; i++) {
		if (alphabet[i] == 0)
			break;

		answer += alphabet[i] * num--;
	}

	cout << answer;
	
	return 0;
}
