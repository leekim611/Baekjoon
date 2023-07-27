/* 
    풀이 날짜: 220715
*/

#include <iostream>

using namespace std;

int main() {
    int weight;
    cin >> weight;
    int five, rest, three, sum = 0;
    five = weight / 5;
    for (int i = five; i >= 0; i--) {
        rest = weight - (i * 5);
        if (rest % 3 == 0) {
            sum = i + rest/3;
            break;
        }
    }

    if (sum == 0) {
        cout << -1 << endl;
    } else {
        cout << sum << endl;
    }
}