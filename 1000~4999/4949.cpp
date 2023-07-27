/* 
    풀이 날짜: 220720
*/

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);
    int temp = 1;
    while(str != ".") {
        stack<char> s;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == ')' || str[i] == '[' || str[i] == ']') {
                if (s.empty()) {
                    if (str[i] == '(' || str[i] == '[') {
                        s.push(str[i]);
                    } else {
                        cout << "no" << "\n";
                        break;
                    }
                } else {
                    if (str[i] == ')' && s.top() == '(') {
                        s.pop();
                    } else if (str[i] == ']' && s.top() == '[') {
                        s.pop();
                    } else if (str[i] == '(' || str[i] == '[') {
                        s.push(str[i]);
                    } else {
                        cout << "no" << "\n";
                        break;
                    }
                }
            } else if (str[i] == '.') {
                if (s.empty()) {
                    cout << "yes" << "\n";
                } else {
                    cout << "no" << "\n";
                }
                break;
            }
        }

        getline(cin, str);
    }
}