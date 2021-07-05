/*
	2217. 로프
	#Greedy

	Key Point!
	아무리 많은 로프를 병렬로 연결시켜서 중량을 나눈다고 해도 
	결국에는 최대 중량이 가장 적은 로프가 들 수 있는 중량만큼이 최댓값이다.
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
	vector<int> v1; //입력된 로프의 중량
	vector<int> v2; //각 로프 별 최대 중량

	cin >> n;

	for (int i = 0; i < n; i++) {
		int temp;
		
		cin >> temp;
		v1.push_back(temp);
	}

	//오름차순 정렬
	sort(v1.begin(), v1.end(), compare);

	//각 로프를 포함시켰을 때 들 수 있는 최대 중량 값을 산출하여 v2에 추가
	for (int i = 0; i < v1.size(); i++) {
		v2.push_back(v1[i] * (n - i));
	}

	//오름차순 정렬
	sort(v2.begin(), v2.end(), compare);

	//v2의 마지막 값 (최대 중량 값) 출력
	cout << v2.back();
	return 0;
}