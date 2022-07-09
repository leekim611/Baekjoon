/* 
    풀이 날짜: 220710
*/

#include <iostream>

using namespace std;

int check(char str, int count);

int main() {
    string str;
    int count = 0;
    bool start = false, end = false;
    getline(cin, str);

    if (str == " ") {
        cout << 0 << endl;
        return 0;
    }

    if (str[0] == ' ') {
        start = true;
    }
    if (str[str.size()-1] == ' ') {
        end = true;
    }

    if (start && end) {
        for (int i = 1; i < str.size()-1; i++) {
            count = check(str[i], count);
        }
    } else if (start && !end) {
        for (int i = 1; i < str.size(); i++) {
            count = check(str[i], count);
        }
    } else if (!start && end) {
        for (int i = 0; i < str.size()-1; i++) {
            count = check(str[i], count);
        }
    } else {
        for (int i = 0; i < str.size(); i++) {
            count = check(str[i], count);
        }
    }

    cout << count + 1 << endl;
}

int check(char c, int count) {
    if (c == ' ') {
        count++;
    }
    return count;
}