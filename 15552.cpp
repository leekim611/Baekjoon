/* 
    풀이 날짜: 220707
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count;
    int n1, n2;
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> n1 >> n2;
        cout << n1 + n2 << "\n";
    }
}