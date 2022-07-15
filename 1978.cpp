/* 
    풀이 날짜: 220715
*/

#include <iostream>

using namespace std;

int main() {
    int rep, num, count = 0;
    bool tf = true;
    cin >> rep;
    while(rep--) {
        cin >> num;
        if (num == 1) {
            continue;
        } else if (num == 2) {
            count++;
            continue;
        }
        for (int i = num-1; i >= 2; i--) {
            if (num % i == 0) {
                tf = false;
            }
        }
        if (tf) {
            count++;
            tf = true;
        }
        tf = true;
    }
    cout << count << endl;
}