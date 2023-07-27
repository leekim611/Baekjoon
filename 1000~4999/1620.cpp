/* 
    풀이 날짜: 220720
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    unordered_map<int, string> um1;
    unordered_map<string, int> um2;
    string str;
    int n, m;
    cin >> n >> m;

    string q;

    for (int i = 0; i < n; i++) {
        cin >> str;
        um1.insert({i+1, str});
        um2.insert({str, i+1});
    }
    for (int i = 0; i < m; i++) {
        cin >> q;
        if (q[0] < 60) {
            int num = stoi(q);
            cout << um1[num] << "\n";
        } else {
            cout << um2[q] << "\n";
        }
    }
}