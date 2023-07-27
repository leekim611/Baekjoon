/* 
    풀이 날짜: 220719
*/

#include <iostream>
#include <algorithm>

using namespace std;

bool comp(string a, string b) {
    if (a.length() == b.length()) {
        return a < b;
    } else {
        return a.length() < b.length();
    }
}

string arr[20000];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int rep;
    cin >> rep;

    for (int i = 0; i < rep; i++) {
        cin >> arr[i];
    }

    sort(arr, arr+rep, comp);

    for (int i = 0; i < rep; i++) {
        if (arr[i-1] != arr[i]) {
            cout << arr[i] << "\n";
        }
    }
}