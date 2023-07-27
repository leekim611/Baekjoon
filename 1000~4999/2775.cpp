/* 
    풀이 날짜: 220715
*/

#include <iostream>

using namespace std;

long long factorial(long long n) {
    long long result = 1;
    for (long long i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long combination(long long s, long long f) {
    long long m = 1;
    long long temp = f;
    while(temp--) {
        m *= s--;
    }
    return m / factorial(f);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long rep, k, n;
    cin >> rep;
    while(rep--) {
        cin >> k >> n;  // 2, 3             1, 3
        long long temp1 = n - 1;  // 2            2
        long long temp2 = k + temp1 + 1;  // 5    4
        // temp2 C n-1 = 5C2
        cout << combination(temp2, n-1) << endl;
    }
}