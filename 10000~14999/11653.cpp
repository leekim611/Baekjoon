/* 
    풀이 날짜: 220715
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    while(true) {
        for (int i = 2; i <= num; i++) {
            if (num % i == 0) {
                num /= i;
                cout << i << endl;
                break;
            }
        }
        if (num == 1) {
            break;
        }
    }
}