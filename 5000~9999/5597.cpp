/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    set<int> s;

    for (int i = 1; i <= 30; i++) {
        s.insert(i);
    }

    for (int i = 0; i < 28; i++) {
        int num;
        cin >> num;
        s.erase(s.find(num));
    }

    for (auto i:s) {
        cout << i << endl;
    }
}