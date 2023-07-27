/* 
    풀이 날짜: 220717
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    int n, num;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    

    while(q.size() != 1) {
        q.pop();
        num = q.front();
        q.pop();
        q.push(num);
    }

    cout << q.front() << endl;
}