/* 
    풀이 날짜: 220711
*/

#include <iostream>

using namespace std;

int count(int num);

int main() {
    int n, rep = 1;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    while(rep) {
        if (n <= count(rep)) {
            break;
        }
        rep++;
    }
    cout << rep+1 << endl;
}

int count(int n) {
    return 3*(n*n) + 3*n + 1;
}


    // 1        1
    // 2 ~ 7    6
    // 8 ~ 19   12
    // 20 ~ 37  18
    // 38 ~ 61  24
    // Sn = n(2*6 + (n-1)*6)/2
    // = n(6n+6)/2
    // = 3n^2 + 3n