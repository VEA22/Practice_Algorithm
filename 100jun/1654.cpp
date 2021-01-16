//https://www.acmicpc.net/problem/1654

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long binarySearch(vector<long long>& input, long long start, long long end, int target) {
    long long maxLen = (start + end) / 2;
    long long sum = 0;

    //���� Ž�� ����
    while (start <= end) {
        sum = 0;
        maxLen = (start + end) / 2;
        for (int i = 0; i < input.size(); i++) {
            sum += input[i] / maxLen;
        }
        //sum�� target���� ������ ������ ���� ���� Ž��
        if (target > sum) {
            end = maxLen - 1;
        }
        //sum�� target���� ũ�ų� ������ ���� ���� ���� Ž��
        else if (sum >= target) {
            start = maxLen + 1;
        }
    }

    return end;
}

int main() {
    int num, targetNum = 0;
    long long sum = 0;
    vector<long long> abc;

    cin >> num >> targetNum;

    for (int i = 0; i < num; i++) {
        long long temp = 0;
        cin >> temp;
        abc.push_back(temp);
        sum += temp;
    }

    //����Ž���� ���� ����
    sort(abc.begin(), abc.end());
    printf("%lld", binarySearch(abc, 1, abc[abc.size() - 1], targetNum));

    return 0;
}
