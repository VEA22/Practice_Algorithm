//https://www.acmicpc.net/problem/2751

#include <iostream>
using namespace std;

void quickSort(int* data, int start, int end) {
    if (start >= end) { // ���Ұ� 1���� ��� �״�� �α� 
        return;
    }

    int key = start; // Ű�� ù ��° ����
    int i = start + 1, j = end, temp;

    while (i <= j) { // ������ ������ �ݺ�
        while (i <= end && data[i] <= data[key]) { // Ű ������ ū ���� ���� ������ 
            i++;
        }
        while (j > start&& data[j] >= data[key]) { // Ű ������ ���� ���� ���� ������ 
            j--;
        }
        if (i > j) { // ���� ������ ���¸� Ű ���� ��ü 
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else { // �������� �ʾҴٸ� i�� j�� ��ü 
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