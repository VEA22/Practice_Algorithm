/*
	1789. ������ ��
	#Greedy
*/

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long num, result;
    cin >> num;
    result = sqrt(2 * num);
    while (result) {
        if ((long long)result * (result + 1) <= 2 * num)
            break;
        else result--;
    }
    cout << result;
    return 0;
}