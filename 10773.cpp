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

    int rep, num, sum = 0;
    cin >> rep;
    stack<int> s;
    while(rep--) {
        cin >> num;
        if (num) {
            s.push(num);
        } else {
            s.pop();
        }
    }

    int size = s.size();

    for (int i = 0; i < size; i++) {
        sum += s.top();
        s.pop();
    }

    cout << sum << "\n";
}