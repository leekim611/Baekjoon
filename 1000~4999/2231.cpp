/* 
    풀이 날짜: 220716
*/

#include <iostream>

using namespace std;

int sum(int n) {
    int sum = 0;
    while(n) {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        if (num == (i + sum(i))) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}