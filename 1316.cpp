/* 
    풀이 날짜: 220710
*/

#include <iostream>

using namespace std;

int main() {
    int num, count = 0;
    cin >> num;
    while(num--) {
        string str;
        bool tf = false;
        bool onoff[26] = {false};
        cin >> str;
        for (int i = 0; i < str.size(); i++) {
            if (onoff[str[i]-'0'-49] == true) {
                tf = true;
            }
            if (i != str.size()-1) {
                if (str[i] != str[i+1]) {
                    onoff[str[i]-'0'-49] = true;
                }
            }
        }
        if (tf) {
            continue;
        } else {
            count++;
        }
    }

    cout << count << endl;

}