/* 
    풀이 날짜: 220715
*/

#include <iostream>

using namespace std;

int main() {
    int rep, h, w, n;
    cin >> rep;
    while(rep--) {
        cin >> h >> w >> n;
        if (n%h == 0) {
            if (n/h < 10) {
                cout << h << 0 << (n/h) << endl;
            } else {
                cout << h << (n/h) << endl;
            }
        } else {
            if ((n/h) + 1 < 10) {
                cout << (n%h) << 0 << (n/h)+1 << endl;
            } else {
                cout << (n%h) << (n/h)+1 << endl;
            }
        }
    }
}