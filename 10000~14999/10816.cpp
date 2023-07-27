/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, int> m;
    int rep1, rep2, key;
    cin >> rep1;
    while(rep1--) {
        cin >> key;
        if (m.find(key) != m.end()) {
            m[key]++;
        } else {
            m.insert({key, 1});
        }
    }

    cin >> rep2;

    while(rep2--) {
        cin >> key;
        if (m.find(key) != m.end()) {
            cout << m[key] << " ";
        } else {
            cout << 0 << " ";
        }
    }
}