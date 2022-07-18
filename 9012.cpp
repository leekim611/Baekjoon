/* 
    풀이 날짜: 220718
*/

#include <iostream>

using namespace std;

int main() {
    int rep;
    cin >> rep;

    while(rep--) {
        bool tf = false;
        string str;
        cin >> str;
        int counter = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str.at(i) == '(') {
                counter++;
                tf = true;
            } else {
                counter--;
                tf = true;
            }
            if (counter < 0) {
                tf = false;
                break;
            }
        }
        if (!tf) {
            cout << "NO" << "\n";
            continue;
        }
        if (!counter) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }
}