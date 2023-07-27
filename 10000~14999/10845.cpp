/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;
    string command;
    int rep, num;
    cin >> rep;
    while(rep--) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            q.push(num);
        } else {
            if (command == "pop") {
                if (q.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << q.front() << "\n";
                    q.pop();
                }
            } else if (command == "size") {
                cout << q.size() << "\n";
            } else if (command == "empty") {
                if (q.empty()) {
                    cout << 1 << "\n";
                } else {
                    cout << 0 << "\n";
                }
            } else if (command == "front") {
                if (q.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << q.front() << "\n";
                }
            } else if (command == "back") {
                if (q.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << q.back() << "\n";
                }
            } else {
                cout << "코드 다시 작성 go" << "\n";
            }
        }
    }
}