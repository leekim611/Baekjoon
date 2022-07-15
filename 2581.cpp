/* 
    풀이 날짜: 220715
*/

#include <iostream>

using namespace std;

int main() {
    int s, f, num, count = 0, min = 10000, sum = 0;
    bool tf = true;
    cin >> s >> f;
    for(int num = s; num <= f; num++) {
        if (num == 1) {
            continue;
        } else if (num == 2) {
            count++;
            min = 2;
            sum += 2;
            continue;
        }
        for (int i = num-1; i >= 2; i--) {
            if (num % i == 0) {
                tf = false;
            }
        }
        if (tf) {
            count++;
            tf = true;
            if (num < min) {
                min = num;
            }
            sum += num;
        }
        tf = true;
    }

    if (sum == 0) {
        cout << -1 << endl;
    } else {
        cout << sum << endl << min << endl;
    }
    
}