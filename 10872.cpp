/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, counter = 1;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        counter *= i;
    }

    cout << counter << endl;
}