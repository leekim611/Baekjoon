/* 
    풀이 날짜: 220719
*/

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    int rep;
    cin >> rep;
    while(rep--) {
        cin >> str;
        cout << str[0] << str[str.length()-1] << endl;
    }
}