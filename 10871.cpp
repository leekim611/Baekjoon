/* 
    풀이 날짜: 220707
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, x, num;
    cin >> n >> x;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (num < x) {
            cout << num << " ";
        }
    }
}