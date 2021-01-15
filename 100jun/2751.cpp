//https://www.acmicpc.net/problem/2751

#include <iostream>
using namespace std;

void quickSort(int* data, int start, int end) {
    if (start >= end) { // 원소가 1개인 경우 그대로 두기 
        return;
    }

    int key = start; // 키는 첫 번째 원소
    int i = start + 1, j = end, temp;

    while (i <= j) { // 엇갈릴 때까지 반복
        while (i <= end && data[i] <= data[key]) { // 키 값보다 큰 값을 만날 때까지 
            i++;
        }
        while (j > start&& data[j] >= data[key]) { // 키 값보다 작은 값을 만날 때까지 
            j--;
        }
        if (i > j) { // 현재 엇갈린 상태면 키 값과 교체 
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else { // 엇갈리지 않았다면 i와 j를 교체 
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    }

    quickSort(data, start, j - 1);
    quickSort(data, j + 1, end);
}

int main() {
    int num;
    cin >> num;

    int* arr = new int[num];

    for (int i = 0; i < num; i++)
        cin >> arr[i];

    quickSort(arr, 0, num - 1);

    for (int i = 0; i < num; i++)
        cout << arr[i] << "\n";

    return 0;
}