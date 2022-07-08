/* 
    풀이 날짜: 220708
*/

#include <iostream>

using namespace std;

bool check(int n);

int main() {
    int n, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        if (check(i+1)) {
            count++;
        }
    }

    cout << count << endl;
}

bool check(int n) {
    if (n < 100) {
        return true;
    } else {
        int a, b, c;
        a = n % 10;
        b = (n/10) % 10;
        c = (n/100);
        if (a + c == 2 * b) {
            return true;
        } else {
            return false;
        }
    }
}