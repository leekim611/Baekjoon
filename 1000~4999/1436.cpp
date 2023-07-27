/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num = 0, input, count = 0;
    cin >> input;
    while(input != count) {
        num++;
        string str = to_string(num);
        if (str.find("666") != string::npos) {
            count++;
        }
    }
    cout << num << '\n';
}