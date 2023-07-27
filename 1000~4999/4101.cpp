/* 
    풀이 날짜: 220720
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long a, b;
    cin >> a >> b;
    while(a != 0 && b != 0) {
        if (a <= b) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
        cin >> a >> b;
    }

}