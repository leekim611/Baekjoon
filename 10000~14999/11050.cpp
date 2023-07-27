/* 
    풀이 날짜: 220717
*/

#include <iostream>

using namespace std;

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n, k;
    cin >> n >> k;

    cout << factorial(n) / factorial(n-k) / factorial(k) << endl;
}