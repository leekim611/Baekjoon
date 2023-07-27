/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    string command;
    int rep, num;
    cin >> rep;
    while(rep--) {
        cin >> command;
        if (command == "push") {
            cin >> num;
            s.push(num);
        } else {
            if (command == "pop") {
                if (s.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << s.top() << "\n";
                    s.pop();
                }
            } else if (command == "size") {
                cout << s.size() << "\n";
            } else if (command == "empty") {
                if (s.empty()) {
                    cout << 1 << "\n";
                } else {
                    cout << 0 << "\n";
                }
            } else if (command == "top") {
                if (s.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << s.top() << "\n";
                }
            } else {
                cout << "코드 다시 작성 go" << "\n";
            }
        }
    }
}