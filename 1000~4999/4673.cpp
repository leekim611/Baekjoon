/* 
    풀이 날짜: 220708
*/

#include <iostream>

using namespace std;

int next(int num);

int main() {
    int arr[10000] = {0}, temp;
    for (int i = 0; i < 10000; i++) {
        temp = next(i+1);
        if (temp <= 10000) {
            arr[temp-1]++;
        }
    }

    for (int i = 0; i < 10000; i++) {
        if (arr[i] == 0) {
            cout << i+1 << endl;
        }
    }
}

int next(int num) {
    int nextNum = num;
    while(num != 0) {
        nextNum += num % 10;
        num /= 10;
    }
    return nextNum;
}