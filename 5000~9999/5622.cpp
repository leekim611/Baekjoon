/* 
    풀이 날짜: 220710
*/

#include <iostream>

using namespace std;

int number(char c);

int main() {
    string str;
    cin >> str;
    int count = 0, num;

    for (int i = 0; i < str.size(); i++) {
        num = number(str[i]);
        if (num > 0) {
            count += num+1;
        } else {
            count += 11;
        }
    }

    cout << count << endl;
}

int number(char c) {
    if (c-'0' >= 17) {
        if (c-'0' < 20) {
            return 2;
        } else if (c-'0' < 23) {
            return 3;
        } else if (c-'0' < 26) {
            return 4;
        } else if (c-'0' < 29) {
            return 5;
        } else if (c-'0' < 32) {
            return 6;
        } else if (c-'0' < 36) {
            return 7;
        } else if (c-'0' < 39) {
            return 8;
        } else if (c-'0' < 43) {
            return 9;
        }
    } else if (c == ' ') {
        return 1;
    } else {
        return 0;
    }
}