/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int p(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return p(n-1) + p(n-2);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    cout << p(n);
}