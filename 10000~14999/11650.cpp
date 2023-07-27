/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep, key, value;
    map<int, set<int>> m;
    cin >> rep;
    for (int i = 0; i < rep; i++) {
        set<int> s;
        cin >> key;
        cin >> value;
        if (m.find(key) != m.end()) {
            m[key].insert(value);
        } else {
            s.insert(value);
            m.insert({key, s});
        }
    }

    for (auto iterM:m) {
        for (auto iterS:iterM.second) {
            cout << iterM.first << " " << iterS << "\n";
        }
    }
}