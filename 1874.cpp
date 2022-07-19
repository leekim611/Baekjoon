/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <stack>

using namespace std;

int arr[100000];
bool arrB[200000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    stack<int> s;

    bool tf = true;
    int rep, cur = 1, arrP = 0, b = 0;
    cin >> rep;

    for (int i = 0; i < rep; i++) {
        int num;
        cin >> num;
        arr[i] = num;
    }

    while(true) {
        if (arrP == rep) {
            break;
        }
        if (s.empty() || arr[arrP] > s.top()) {
            s.push(cur++);
            arrB[b++] = true;
        } else if (arr[arrP] == s.top()) {
            s.pop();
            arrB[b++] = false;
            arrP++;
        } else if (arr[arrP] < s.top()) {
            tf = false;
            break;
        }
    }

    if (tf) {
        for (int i = 0; i < 2*rep; i++) {
            if (arrB[i]) {
                cout << "+" << "\n";
            } else {
                cout << "-" << "\n";
            }
        }
    } else {
        cout << "NO" << "\n";
    }
}