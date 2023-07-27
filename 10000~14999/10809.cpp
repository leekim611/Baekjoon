/* 
    풀이 날짜: 220708
*/

#include <iostream>

using namespace std;

int main() {
    int arrInt[26];
    char arrChar[101] = {'a'};
    cin >> arrChar;

    for (int i = 0; i < 26; i++) {
        arrInt[i] = -1;
    }

    for (int i = 0; i < 100; i++) {
        if (arrChar[i] <= 'z' && arrChar[i] >= 'a') {
            if (arrInt[arrChar[i]-'a'] == -1) {
                arrInt[arrChar[i]-'a'] = i;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << arrInt[i] << " ";
    }
}