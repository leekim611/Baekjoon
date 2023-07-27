/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    queue<int> q;
    int rep, k;
    cin >> rep >> k;
    for (int i = 1; i <= rep; i++) {
        q.push(i);
    }
    k--;

    cout << "<";
    while(q.size() != 1) {
        for (int i = 0; i < k; i++) {
            int num = q.front();
            q.pop();
            q.push(num);
        }
        int kill = q.front();
        q.pop();
        cout << kill << ", ";
    }
    cout << q.front() << ">" << "\n";
}