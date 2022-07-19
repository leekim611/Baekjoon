/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d;
    string command;
    int rep, num;
    cin >> rep;
    while(rep--) {
        cin >> command;
        if (command == "push_front") {
            cin >> num;
            d.push_front(num);
        } else if (command == "push_back") {
            cin >> num;
            d.push_back(num);
        } else {
            if (command == "pop_front") {
                if (d.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << d.front() << "\n";
                    d.pop_front();
                }
            } else if (command == "pop_back") {
                if (d.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << d.back() << "\n";
                    d.pop_back();
                }
            } else if (command == "size") {
                cout << d.size() << "\n";
            } else if (command == "empty") {
                if (d.empty()) {
                    cout << 1 << "\n";
                } else {
                    cout << 0 << "\n";
                }
            } else if (command == "front") {
                if (d.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << d.front() << "\n";
                }
            } else if (command == "back") {
                if (d.size() == 0) {
                    cout << -1 << "\n";
                } else {
                    cout << d.back() << "\n";
                }
            } else {
                cout << "코드 다시 작성 go" << "\n";
            }
        }
    }
}