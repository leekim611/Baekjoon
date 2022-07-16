/* 
    풀이 날짜: 220717
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int rep, n;
    cin >> rep;
    int arr[10000];
    for (int i = 0; i < 10000; i++) {
        arr[i] = 0;
    }

    while(rep--) {
        cin >> n;
        arr[n-1]++;
    }

    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j < arr[i]; j++) {
            cout << i+1 << '\n';
        }
    }
}