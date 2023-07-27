/* 
    풀이 날짜: 220707
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j > num - i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }
}