/*
	13305. 주유소
	#Greedy
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n; //도시의 개수
	vector <int> city; //각 도시의 기름 가격
	vector<int> distance; //도시 간의 거리
	
	long long fuel; //총 유류값
	int minF; //현재 들린 도시 중 가장 저렴한 기름 값

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

	//첫번째 도시에서 두번째 도시로 이동할 때는 무조건
	//첫번째 도시에서 기름을 충전 해야한다.
	minF = city[0];
	fuel = city[0] * (long long)distance[0];
	for (int i = 1; i < n-1; i++) {
		//만약 도착한 다음 도시의 기름 값이 이전 도시보다 싸면
		//해당 도시의 기름 가격을 기준으로 다음 저렴한 도시가 나올때까지 거리를 계산한다.
		if (city[i] < minF) {
			minF = city[i];
		}

		fuel += minF * (long long)distance[i];
	}

	cout << fuel;

	return 0;
}