/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;
    cin >> a >> b;
    if (a-b < 0) {
        cout << (a-b)*(-1);
    } else {
        cout << a-b;
    }

}