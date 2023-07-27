/* 
    풀이 날짜: 220711
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int height, up, down, day = 0;
    cin >> up >> down >> height;

    height -= up;
    if (height % (up-down) == 0) {
        cout << height / (up-down) + 1 << endl;
    } else {
        cout << height / (up-down) + 2 << endl;
    }
}