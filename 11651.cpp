/* 
    풀이 날짜: 2207120
*/

#include <iostream>
#include <map>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<int, set<int>> m;       // y, x

    int rep;
    cin >> rep;
    while(rep--) {
        set<int> s;
        int x, y;
        cin >> x >> y;
        if (m.find(y) != m.end()) {
            m[y].insert(x);
        } else {
            s.insert(x);
            m.insert({y, s});
        }
    }

    for (auto iterM:m) {
        for (auto iterS:iterM.second) {
            cout << iterS << " " << iterM.first << "\n";
        }
    }
}